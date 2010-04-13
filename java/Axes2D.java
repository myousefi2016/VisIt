// ***************************************************************************
//
// Copyright (c) 2000 - 2010, Lawrence Livermore National Security, LLC
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

package llnl.visit;


// ****************************************************************************
// Class: Axes2D
//
// Purpose:
//    Contains the properties for the 2D axes.
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class Axes2D extends AttributeSubject
{
    private static int Axes2D_numAdditionalAtts = 8;

    // Enum values
    public final static int TICKS_OFF = 0;
    public final static int TICKS_BOTTOM = 1;
    public final static int TICKS_LEFT = 2;
    public final static int TICKS_BOTTOMLEFT = 3;
    public final static int TICKS_ALL = 4;

    public final static int LOCATION_INSIDE = 0;
    public final static int LOCATION_OUTSIDE = 1;
    public final static int LOCATION_BOTH = 2;


    public Axes2D()
    {
        super(Axes2D_numAdditionalAtts);

        visible = true;
        autoSetTicks = true;
        autoSetScaling = true;
        lineWidth = 0;
        tickLocation = LOCATION_OUTSIDE;
        tickAxes = TICKS_BOTTOMLEFT;
        xAxis = new AxisAttributes();
        yAxis = new AxisAttributes();
    }

    public Axes2D(int nMoreFields)
    {
        super(Axes2D_numAdditionalAtts + nMoreFields);

        visible = true;
        autoSetTicks = true;
        autoSetScaling = true;
        lineWidth = 0;
        tickLocation = LOCATION_OUTSIDE;
        tickAxes = TICKS_BOTTOMLEFT;
        xAxis = new AxisAttributes();
        yAxis = new AxisAttributes();
    }

    public Axes2D(Axes2D obj)
    {
        super(Axes2D_numAdditionalAtts);

        visible = obj.visible;
        autoSetTicks = obj.autoSetTicks;
        autoSetScaling = obj.autoSetScaling;
        lineWidth = obj.lineWidth;
        tickLocation = obj.tickLocation;
        tickAxes = obj.tickAxes;
        xAxis = new AxisAttributes(obj.xAxis);
        yAxis = new AxisAttributes(obj.yAxis);

        SelectAll();
    }

    public int Offset()
    {
        return super.Offset() + super.GetNumAdditionalAttributes();
    }

    public int GetNumAdditionalAttributes()
    {
        return Axes2D_numAdditionalAtts;
    }

    public boolean equals(Axes2D obj)
    {
        // Create the return value
        return ((visible == obj.visible) &&
                (autoSetTicks == obj.autoSetTicks) &&
                (autoSetScaling == obj.autoSetScaling) &&
                (lineWidth == obj.lineWidth) &&
                (tickLocation == obj.tickLocation) &&
                (tickAxes == obj.tickAxes) &&
                (xAxis.equals(obj.xAxis)) &&
                (yAxis.equals(obj.yAxis)));
    }

    // Property setting methods
    public void SetVisible(boolean visible_)
    {
        visible = visible_;
        Select(0);
    }

    public void SetAutoSetTicks(boolean autoSetTicks_)
    {
        autoSetTicks = autoSetTicks_;
        Select(1);
    }

    public void SetAutoSetScaling(boolean autoSetScaling_)
    {
        autoSetScaling = autoSetScaling_;
        Select(2);
    }

    public void SetLineWidth(int lineWidth_)
    {
        lineWidth = lineWidth_;
        Select(3);
    }

    public void SetTickLocation(int tickLocation_)
    {
        tickLocation = tickLocation_;
        Select(4);
    }

    public void SetTickAxes(int tickAxes_)
    {
        tickAxes = tickAxes_;
        Select(5);
    }

    public void SetXAxis(AxisAttributes xAxis_)
    {
        xAxis = xAxis_;
        Select(6);
    }

    public void SetYAxis(AxisAttributes yAxis_)
    {
        yAxis = yAxis_;
        Select(7);
    }

    // Property getting methods
    public boolean        GetVisible() { return visible; }
    public boolean        GetAutoSetTicks() { return autoSetTicks; }
    public boolean        GetAutoSetScaling() { return autoSetScaling; }
    public int            GetLineWidth() { return lineWidth; }
    public int            GetTickLocation() { return tickLocation; }
    public int            GetTickAxes() { return tickAxes; }
    public AxisAttributes GetXAxis() { return xAxis; }
    public AxisAttributes GetYAxis() { return yAxis; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteBool(visible);
        if(WriteSelect(1, buf))
            buf.WriteBool(autoSetTicks);
        if(WriteSelect(2, buf))
            buf.WriteBool(autoSetScaling);
        if(WriteSelect(3, buf))
            buf.WriteInt(lineWidth);
        if(WriteSelect(4, buf))
            buf.WriteInt(tickLocation);
        if(WriteSelect(5, buf))
            buf.WriteInt(tickAxes);
        if(WriteSelect(6, buf))
            xAxis.Write(buf);
        if(WriteSelect(7, buf))
            yAxis.Write(buf);
    }

    public void ReadAtts(int index, CommunicationBuffer buf)
    {
        switch(index)
        {
        case 0:
            SetVisible(buf.ReadBool());
            break;
        case 1:
            SetAutoSetTicks(buf.ReadBool());
            break;
        case 2:
            SetAutoSetScaling(buf.ReadBool());
            break;
        case 3:
            SetLineWidth(buf.ReadInt());
            break;
        case 4:
            SetTickLocation(buf.ReadInt());
            break;
        case 5:
            SetTickAxes(buf.ReadInt());
            break;
        case 6:
            xAxis.Read(buf);
            Select(6);
            break;
        case 7:
            yAxis.Read(buf);
            Select(7);
            break;
        }
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + boolToString("visible", visible, indent) + "\n";
        str = str + boolToString("autoSetTicks", autoSetTicks, indent) + "\n";
        str = str + boolToString("autoSetScaling", autoSetScaling, indent) + "\n";
        str = str + intToString("lineWidth", lineWidth, indent) + "\n";
        str = str + indent + "tickLocation = ";
        if(tickLocation == LOCATION_INSIDE)
            str = str + "LOCATION_INSIDE";
        if(tickLocation == LOCATION_OUTSIDE)
            str = str + "LOCATION_OUTSIDE";
        if(tickLocation == LOCATION_BOTH)
            str = str + "LOCATION_BOTH";
        str = str + "\n";
        str = str + indent + "tickAxes = ";
        if(tickAxes == TICKS_OFF)
            str = str + "TICKS_OFF";
        if(tickAxes == TICKS_BOTTOM)
            str = str + "TICKS_BOTTOM";
        if(tickAxes == TICKS_LEFT)
            str = str + "TICKS_LEFT";
        if(tickAxes == TICKS_BOTTOMLEFT)
            str = str + "TICKS_BOTTOMLEFT";
        if(tickAxes == TICKS_ALL)
            str = str + "TICKS_ALL";
        str = str + "\n";
        str = str + indent + "xAxis = {\n" + xAxis.toString(indent + "    ") + indent + "}\n";
        str = str + indent + "yAxis = {\n" + yAxis.toString(indent + "    ") + indent + "}\n";
        return str;
    }


    // Attributes
    private boolean        visible;
    private boolean        autoSetTicks;
    private boolean        autoSetScaling;
    private int            lineWidth;
    private int            tickLocation;
    private int            tickAxes;
    private AxisAttributes xAxis;
    private AxisAttributes yAxis;
}

