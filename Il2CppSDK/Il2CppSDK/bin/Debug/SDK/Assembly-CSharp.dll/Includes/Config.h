#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Config
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Config"));
	}

	template <typename R = Il2CppString*> R& RouterURL() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& RouterURL_multy() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppList<ServerVariant*>*& Variants() {
		return *(Il2CppList<ServerVariant*>**)((uintptr_t)this + 0x20);
	}


};

