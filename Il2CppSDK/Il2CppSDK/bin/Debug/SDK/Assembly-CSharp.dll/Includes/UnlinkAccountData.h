#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlinkAccountData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlinkAccountData"));
	}

	template <typename R = LinkType> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Id() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UnlinkAccountData*, uintptr_t))(Il2CppBase() + 0x153A8C4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UnlinkAccountData*, uintptr_t))(Il2CppBase() + 0x153A918))(this, reader);
	}

};

