/*****************************************************************************
*
* Copyright (c) 2000 - 2015, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-442911
* All rights reserved.
*
* This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or other materials provided with the distribution.
*  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
* LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
* DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

// ************************************************************************* //
//                            avtTiledImageCompositor.h                      //
// ************************************************************************* //

#ifndef AVT_TILED_IMAGE_COMPOSITOR_H
#define AVT_TILED_IMAGE_COMPOSITOR_H
#include <filters_exports.h>
#ifdef PARALLEL
#include <mpi.h>
#endif

#include <avtImageCompositer.h>

// ****************************************************************************
//  Class: avtTiledImageCompositor
//
//  Purpose:
//      Composes images that have disparate spatial regions.  In other words,
//      it assumes each processor owns some screen-space tile of the whole
//      image and compositing need not use the Z-buffer at all.
//
//  Programmer: Jeremy Meredith
//  Creation:   August 30, 2004
//
//  Modifications:
//
//      Burlen Loring, Wed Sep  9 12:54:39 PDT 2015
//      Add flag to broadcast the result, consistent with the other avt
//      compositring classes
//
// ****************************************************************************

class AVTFILTERS_API avtTiledImageCompositor : public avtImageCompositer
{
   public:
                              avtTiledImageCompositor();
      virtual                ~avtTiledImageCompositor();

      const char             *GetType(void);
      const char             *GetDescription(void);

      void                    SetChunkSize(const int chunkSize);
      int                     GetChunkSize() const;

      void                    Execute();

      void                    SetAllProcessorsNeedResult(bool v)
                              { bcastResult = v; }

   private:
      int                     chunkSize;
      bool                    bcastResult;
};

inline const char* avtTiledImageCompositor::GetType()
{ return "avtTiledImageCompositor";}

inline const char* avtTiledImageCompositor::GetDescription()
{ return "performing tiled-image composite"; }

inline void avtTiledImageCompositor::SetChunkSize(const int _chunkSize)
{ chunkSize = _chunkSize; }

inline int avtTiledImageCompositor::GetChunkSize() const
{ return chunkSize; }

#endif
