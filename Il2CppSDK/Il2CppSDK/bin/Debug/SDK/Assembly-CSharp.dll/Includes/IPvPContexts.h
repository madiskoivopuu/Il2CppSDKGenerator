#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPvPContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPvPContexts"));
	}


	template <typename R = PvPContext*> R get_pvps() {
		return ((R (*)(IPvPContexts*))(Il2CppBase() + 0x0))(this);
	}

};

