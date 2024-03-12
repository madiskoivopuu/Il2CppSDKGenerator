#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotifyWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotifyWindow"));
	}


	template <typename T = void> T ShowWarning(Il2CppString* msg) {
		return ((T (*)(INotifyWindow*, Il2CppString*))(Il2CppBase() + 0x0))(this, msg);
	}

};

}
