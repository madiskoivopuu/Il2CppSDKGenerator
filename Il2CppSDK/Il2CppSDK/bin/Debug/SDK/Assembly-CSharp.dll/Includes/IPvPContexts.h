#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPvPContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPvPContexts"));
	}


	template <typename T = PvPContext*> T get_pvps() {
		return ((T (*)(IPvPContexts*))(Il2CppBase() + 0x0))(this);
	}

};

