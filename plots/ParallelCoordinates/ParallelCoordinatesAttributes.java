// ***************************************************************************
//
// Copyright (c) 2000 - 2008, Lawrence Livermore National Security, LLC
// Produced at the Lawrence Livermore National Laboratory
// LLNL-CODE-400142
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

package llnl.visit.plots;

import llnl.visit.AttributeSubject;
import llnl.visit.CommunicationBuffer;
import llnl.visit.Plugin;
import java.util.Vector;
import java.lang.Double;
import llnl.visit.ColorAttribute;

// ****************************************************************************
// Class: ParallelCoordinatesAttributes
//
// Purpose:
//    This class contains the plot attributes for the ParallelCoordinates plot.
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   Fri Feb 1 17:55:41 PST 2008
//
// Modifications:
//   
// ****************************************************************************

public class ParallelCoordinatesAttributes extends AttributeSubject implements Plugin
{
    public ParallelCoordinatesAttributes()
    {
        super(12);

        orderedAxisNames = new Vector();
        orderedAxisNames.addElement(new String("default"));
        axisMinima = new Vector();
        axisMinima.addElement(new Double(-1e+37));
        axisMaxima = new Vector();
        axisMaxima.addElement(new Double(1e+37));
        extentMinima = new Vector();
        extentMinima.addElement(new Double(0));
        extentMaxima = new Vector();
        extentMaxima.addElement(new Double(1));
        drawLines = true;
        linesColor = new ColorAttribute(128, 0, 0);
        drawContext = true;
        contextGamma = 2f;
        contextNumPartitions = 512;
        contextColor = new ColorAttribute(0, 220, 0);
        drawLinesOnlyIfExtentsOn = true;
    }

    public ParallelCoordinatesAttributes(ParallelCoordinatesAttributes obj)
    {
        super(12);

        int i;

        orderedAxisNames = new Vector(obj.orderedAxisNames.size());
        for(i = 0; i < obj.orderedAxisNames.size(); ++i)
            orderedAxisNames.addElement(new String((String)obj.orderedAxisNames.elementAt(i)));

        axisMinima = new Vector(obj.axisMinima.size());
        for(i = 0; i < obj.axisMinima.size(); ++i)
        {
            Double dv = (Double)obj.axisMinima.elementAt(i);
            axisMinima.addElement(new Double(dv.doubleValue()));
        }

        axisMaxima = new Vector(obj.axisMaxima.size());
        for(i = 0; i < obj.axisMaxima.size(); ++i)
        {
            Double dv = (Double)obj.axisMaxima.elementAt(i);
            axisMaxima.addElement(new Double(dv.doubleValue()));
        }

        extentMinima = new Vector(obj.extentMinima.size());
        for(i = 0; i < obj.extentMinima.size(); ++i)
        {
            Double dv = (Double)obj.extentMinima.elementAt(i);
            extentMinima.addElement(new Double(dv.doubleValue()));
        }

        extentMaxima = new Vector(obj.extentMaxima.size());
        for(i = 0; i < obj.extentMaxima.size(); ++i)
        {
            Double dv = (Double)obj.extentMaxima.elementAt(i);
            extentMaxima.addElement(new Double(dv.doubleValue()));
        }

        drawLines = obj.drawLines;
        linesColor = new ColorAttribute(obj.linesColor);
        drawContext = obj.drawContext;
        contextGamma = obj.contextGamma;
        contextNumPartitions = obj.contextNumPartitions;
        contextColor = new ColorAttribute(obj.contextColor);
        drawLinesOnlyIfExtentsOn = obj.drawLinesOnlyIfExtentsOn;

        SelectAll();
    }

    public boolean equals(ParallelCoordinatesAttributes obj)
    {
        int i;

        // Create the return value
        return ((orderedAxisNames == obj.orderedAxisNames) &&
                (axisMinima == obj.axisMinima) &&
                (axisMaxima == obj.axisMaxima) &&
                (extentMinima == obj.extentMinima) &&
                (extentMaxima == obj.extentMaxima) &&
                (drawLines == obj.drawLines) &&
                (linesColor == obj.linesColor) &&
                (drawContext == obj.drawContext) &&
                (contextGamma == obj.contextGamma) &&
                (contextNumPartitions == obj.contextNumPartitions) &&
                (contextColor == obj.contextColor) &&
                (drawLinesOnlyIfExtentsOn == obj.drawLinesOnlyIfExtentsOn));
    }

    public String GetName() { return "ParallelCoordinates"; }
    public String GetVersion() { return "1.0"; }

    // Property setting methods
    public void SetOrderedAxisNames(Vector orderedAxisNames_)
    {
        orderedAxisNames = orderedAxisNames_;
        Select(0);
    }

    public void SetAxisMinima(Vector axisMinima_)
    {
        axisMinima = axisMinima_;
        Select(1);
    }

    public void SetAxisMaxima(Vector axisMaxima_)
    {
        axisMaxima = axisMaxima_;
        Select(2);
    }

    public void SetExtentMinima(Vector extentMinima_)
    {
        extentMinima = extentMinima_;
        Select(3);
    }

    public void SetExtentMaxima(Vector extentMaxima_)
    {
        extentMaxima = extentMaxima_;
        Select(4);
    }

    public void SetDrawLines(boolean drawLines_)
    {
        drawLines = drawLines_;
        Select(5);
    }

    public void SetLinesColor(ColorAttribute linesColor_)
    {
        linesColor = linesColor_;
        Select(6);
    }

    public void SetDrawContext(boolean drawContext_)
    {
        drawContext = drawContext_;
        Select(7);
    }

    public void SetContextGamma(float contextGamma_)
    {
        contextGamma = contextGamma_;
        Select(8);
    }

    public void SetContextNumPartitions(int contextNumPartitions_)
    {
        contextNumPartitions = contextNumPartitions_;
        Select(9);
    }

    public void SetContextColor(ColorAttribute contextColor_)
    {
        contextColor = contextColor_;
        Select(10);
    }

    public void SetDrawLinesOnlyIfExtentsOn(boolean drawLinesOnlyIfExtentsOn_)
    {
        drawLinesOnlyIfExtentsOn = drawLinesOnlyIfExtentsOn_;
        Select(11);
    }

    // Property getting methods
    public Vector         GetOrderedAxisNames() { return orderedAxisNames; }
    public Vector         GetAxisMinima() { return axisMinima; }
    public Vector         GetAxisMaxima() { return axisMaxima; }
    public Vector         GetExtentMinima() { return extentMinima; }
    public Vector         GetExtentMaxima() { return extentMaxima; }
    public boolean        GetDrawLines() { return drawLines; }
    public ColorAttribute GetLinesColor() { return linesColor; }
    public boolean        GetDrawContext() { return drawContext; }
    public float          GetContextGamma() { return contextGamma; }
    public int            GetContextNumPartitions() { return contextNumPartitions; }
    public ColorAttribute GetContextColor() { return contextColor; }
    public boolean        GetDrawLinesOnlyIfExtentsOn() { return drawLinesOnlyIfExtentsOn; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteStringVector(orderedAxisNames);
        if(WriteSelect(1, buf))
            buf.WriteDoubleVector(axisMinima);
        if(WriteSelect(2, buf))
            buf.WriteDoubleVector(axisMaxima);
        if(WriteSelect(3, buf))
            buf.WriteDoubleVector(extentMinima);
        if(WriteSelect(4, buf))
            buf.WriteDoubleVector(extentMaxima);
        if(WriteSelect(5, buf))
            buf.WriteBool(drawLines);
        if(WriteSelect(6, buf))
            linesColor.Write(buf);
        if(WriteSelect(7, buf))
            buf.WriteBool(drawContext);
        if(WriteSelect(8, buf))
            buf.WriteFloat(contextGamma);
        if(WriteSelect(9, buf))
            buf.WriteInt(contextNumPartitions);
        if(WriteSelect(10, buf))
            contextColor.Write(buf);
        if(WriteSelect(11, buf))
            buf.WriteBool(drawLinesOnlyIfExtentsOn);
    }

    public void ReadAtts(int n, CommunicationBuffer buf)
    {
        for(int i = 0; i < n; ++i)
        {
            int index = (int)buf.ReadByte();
            switch(index)
            {
            case 0:
                SetOrderedAxisNames(buf.ReadStringVector());
                break;
            case 1:
                SetAxisMinima(buf.ReadDoubleVector());
                break;
            case 2:
                SetAxisMaxima(buf.ReadDoubleVector());
                break;
            case 3:
                SetExtentMinima(buf.ReadDoubleVector());
                break;
            case 4:
                SetExtentMaxima(buf.ReadDoubleVector());
                break;
            case 5:
                SetDrawLines(buf.ReadBool());
                break;
            case 6:
                linesColor.Read(buf);
                Select(6);
                break;
            case 7:
                SetDrawContext(buf.ReadBool());
                break;
            case 8:
                SetContextGamma(buf.ReadFloat());
                break;
            case 9:
                SetContextNumPartitions(buf.ReadInt());
                break;
            case 10:
                contextColor.Read(buf);
                Select(10);
                break;
            case 11:
                SetDrawLinesOnlyIfExtentsOn(buf.ReadBool());
                break;
            }
        }
    }


    // Attributes
    private Vector         orderedAxisNames; // vector of String objects
    private Vector         axisMinima; // vector of Double objects
    private Vector         axisMaxima; // vector of Double objects
    private Vector         extentMinima; // vector of Double objects
    private Vector         extentMaxima; // vector of Double objects
    private boolean        drawLines;
    private ColorAttribute linesColor;
    private boolean        drawContext;
    private float          contextGamma;
    private int            contextNumPartitions;
    private ColorAttribute contextColor;
    private boolean        drawLinesOnlyIfExtentsOn;
}

