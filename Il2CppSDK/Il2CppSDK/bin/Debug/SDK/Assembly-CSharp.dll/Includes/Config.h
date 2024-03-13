#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Config
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Config"));
	}

	template <typename T = Il2CppString*> T& RouterURL() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RouterURL_multy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<ServerVariant*>*> T& Variants() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

