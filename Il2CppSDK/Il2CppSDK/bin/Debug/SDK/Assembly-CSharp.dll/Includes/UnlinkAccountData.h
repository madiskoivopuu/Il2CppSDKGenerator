#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlinkAccountData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlinkAccountData"));
	}

	template <typename T = LinkType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UnlinkAccountData*, uintptr_t))(Il2CppBase() + 0x153A8C4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UnlinkAccountData*, uintptr_t))(Il2CppBase() + 0x153A918))(this, reader);
	}

};

