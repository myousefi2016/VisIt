// ***************************************************************************
//
// Copyright (c) 2000 - 2009, Lawrence Livermore National Security, LLC
// Produced at the Lawrence Livermore National Laboratory
// LLNL-CODE-400124
// All rights reserved.
//
// This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
// full copyright notice is contained in the file COPYRIGHT located at the root
// of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
//
// Redistribution  and  use  in  source  and  binary  forms,  with  or  without
// modification, are permitted provided that the following conditions are met:
//
//  - Redistributions of  source code must  retain the above  copyright notice,
//    this list of conditions and the disclaimer below.
//  - Redistributions in binary form must reproduce the above copyright notice,
//    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
//    documentation and/or other materials provided with the distribution.
//  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
//    be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
// ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
// LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
// DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
// SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
// CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
// LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
// OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ***************************************************************************

package llnl.visit.operators;

import llnl.visit.AttributeSubject;
import llnl.visit.CommunicationBuffer;
import llnl.visit.Plugin;

// ****************************************************************************
// Class: PersistentParticlesAttributes
//
// Purpose:
//    This class contains attributes for the PersistentParticles operator.
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   Fri Jan 25 11:27:41 PDT 2008
//
// Modifications:
//   
// ****************************************************************************

public class PersistentParticlesAttributes extends AttributeSubject implements Plugin
{
    public PersistentParticlesAttributes()
    {
<<<<<<< .working
        super(3);
=======
        super(7);
>>>>>>> .merge-right.r7293

        startIndex = 0;
        startIndexRelative = false;
        stopIndex = 1;
        stopIndexRelative = false;
        stride = 1;
    }

    public PersistentParticlesAttributes(PersistentParticlesAttributes obj)
    {
<<<<<<< .working
        super(3);
=======
        super(7);
>>>>>>> .merge-right.r7293

        startIndex = obj.startIndex;
        startIndexRelative = obj.startIndexRelative;
        stopIndex = obj.stopIndex;
        stopIndexRelative = obj.stopIndexRelative;
        stride = obj.stride;

        SelectAll();
    }

    public boolean equals(PersistentParticlesAttributes obj)
    {
        // Create the return value
        return ((startIndex == obj.startIndex) &&
                (startIndexRelative == obj.startIndexRelative) &&
                (stopIndex == obj.stopIndex) &&
<<<<<<< .working
                (stride == obj.stride));
=======
                (stopIndexRelative == obj.stopIndexRelative) &&
                (stride == obj.stride) &&
                (indexVariable.equals(obj.indexVariable)) &&
                (connectParticles == obj.connectParticles));
>>>>>>> .merge-right.r7293
    }

    public String GetName() { return "PersistentParticles"; }
    public String GetVersion() { return "1.0"; }

    // Property setting methods
    public void SetStartIndex(int startIndex_)
    {
        startIndex = startIndex_;
        Select(0);
    }

    public void SetStartIndexRelative(boolean startIndexRelative_)
    {
        startIndexRelative = startIndexRelative_;
        Select(1);
    }

    public void SetStopIndex(int stopIndex_)
    {
        stopIndex = stopIndex_;
        Select(2);
    }

    public void SetStopIndexRelative(boolean stopIndexRelative_)
    {
        stopIndexRelative = stopIndexRelative_;
        Select(3);
    }

    public void SetStride(int stride_)
    {
        stride = stride_;
        Select(4);
    }

<<<<<<< .working
=======
    public void SetIndexVariable(String indexVariable_)
    {
        indexVariable = indexVariable_;
        Select(5);
    }

    public void SetConnectParticles(boolean connectParticles_)
    {
        connectParticles = connectParticles_;
        Select(6);
    }

>>>>>>> .merge-right.r7293
    // Property getting methods
<<<<<<< .working
    public int GetStartIndex() { return startIndex; }
    public int GetStopIndex() { return stopIndex; }
    public int GetStride() { return stride; }
=======
    public int     GetStartIndex() { return startIndex; }
    public boolean GetStartIndexRelative() { return startIndexRelative; }
    public int     GetStopIndex() { return stopIndex; }
    public boolean GetStopIndexRelative() { return stopIndexRelative; }
    public int     GetStride() { return stride; }
    public String  GetIndexVariable() { return indexVariable; }
    public boolean GetConnectParticles() { return connectParticles; }
>>>>>>> .merge-right.r7293

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteInt(startIndex);
        if(WriteSelect(1, buf))
            buf.WriteBool(startIndexRelative);
        if(WriteSelect(2, buf))
            buf.WriteInt(stopIndex);
        if(WriteSelect(3, buf))
            buf.WriteBool(stopIndexRelative);
        if(WriteSelect(4, buf))
            buf.WriteInt(stride);
<<<<<<< .working
=======
        if(WriteSelect(5, buf))
            buf.WriteString(indexVariable);
        if(WriteSelect(6, buf))
            buf.WriteBool(connectParticles);
>>>>>>> .merge-right.r7293
    }

    public void ReadAtts(int n, CommunicationBuffer buf)
    {
        for(int i = 0; i < n; ++i)
        {
            int index = (int)buf.ReadByte();
            switch(index)
            {
            case 0:
                SetStartIndex(buf.ReadInt());
                break;
            case 1:
                SetStartIndexRelative(buf.ReadBool());
                break;
            case 2:
                SetStopIndex(buf.ReadInt());
                break;
            case 3:
                SetStopIndexRelative(buf.ReadBool());
                break;
            case 4:
                SetStride(buf.ReadInt());
                break;
<<<<<<< .working
=======
            case 5:
                SetIndexVariable(buf.ReadString());
                break;
            case 6:
                SetConnectParticles(buf.ReadBool());
                break;
>>>>>>> .merge-right.r7293
            }
        }
    }

<<<<<<< .working
=======
    public String toString(String indent)
    {
        String str = new String();
        str = str + intToString("startIndex", startIndex, indent) + "\n";
        str = str + boolToString("startIndexRelative", startIndexRelative, indent) + "\n";
        str = str + intToString("stopIndex", stopIndex, indent) + "\n";
        str = str + boolToString("stopIndexRelative", stopIndexRelative, indent) + "\n";
        str = str + intToString("stride", stride, indent) + "\n";
        str = str + stringToString("indexVariable", indexVariable, indent) + "\n";
        str = str + boolToString("connectParticles", connectParticles, indent) + "\n";
        return str;
    }
>>>>>>> .merge-right.r7293

    // Attributes
<<<<<<< .working
    private int startIndex;
    private int stopIndex;
    private int stride;
=======
    private int     startIndex;
    private boolean startIndexRelative;
    private int     stopIndex;
    private boolean stopIndexRelative;
    private int     stride;
    private String  indexVariable;
    private boolean connectParticles;
>>>>>>> .merge-right.r7293
}

