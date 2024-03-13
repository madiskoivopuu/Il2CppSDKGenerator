#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IVIPContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IVIPContexts"));
	}


	template <typename T = VIPContext*> T get_vip() {
		return ((T (*)(IVIPContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = VIPDataContext*> T get_vipData() {
		return ((T (*)(IVIPContexts*))(Il2CppBase() + 0x0))(this);
	}

};

