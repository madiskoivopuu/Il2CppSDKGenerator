#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IVIPContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IVIPContexts"));
	}


	template <typename R = VIPContext*> R get_vip() {
		return ((R (*)(IVIPContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = VIPDataContext*> R get_vipData() {
		return ((R (*)(IVIPContexts*))(Il2CppBase() + 0x0))(this);
	}

};

