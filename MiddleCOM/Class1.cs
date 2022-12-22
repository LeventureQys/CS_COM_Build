
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace MiddleCOM
{
    [Guid("7EEDF2D8-836C-4294-90A0-7A144ADC93F9")]
    [InterfaceType(ComInterfaceType.InterfaceIsDual)]
    public interface IOutClass
    {
        [DispId(1)]
        void getMessage(System.String strValue);
    }

    [Guid("7FE32A1D-F239-45ad-8188-89738C6EDB6F")]
    [InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
    public interface IOutClass_Event
    {
        [DispId(11)]
        void SendMessageOut(System.String strValue);
    }
    [Guid("76BBA445-7554-4308-8487-322BAE955527")]
    [ClassInterface(ClassInterfaceType.None)]
    [ComDefaultInterface(typeof(IOutClass))]
    [ComSourceInterfaces(typeof(IOutClass_Event))]
    [ComVisible(true)]
    [ProgId("IOutClass")]
    public class OutClass : IOutClass
    {
        FrameWork.Form1 form1 = null;
        public OutClass()
        {
            if(form1 == null)
            {
                this.form1 = new FrameWork.Form1();
                this.form1.SendMessageOut += new FrameWork.Form1.SendMessageOutEventHandler(this.SendMessageReceived);
                this.form1.Show();
            }
        }
        public void getMessage(System.String strValue)
        {
            if(this.form1 != null)
            {
                this.form1.getMessage(strValue);
            }
        }

        public delegate void SendMessageEventHandler(System.String strValue);
        public event SendMessageEventHandler SendMessageOut;

        private void SendMessageReceived(System.String strValue)
        {
            //向外发送消息
            SendMessageOut(strValue);
        }
    }
}
