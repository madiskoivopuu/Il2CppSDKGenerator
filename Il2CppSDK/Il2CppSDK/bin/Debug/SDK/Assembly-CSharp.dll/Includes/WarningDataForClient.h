#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningDataForClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningDataForClient"));
	}

	template <typename R = ServiceMessage*> R& Message() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = MessageLayer*> R& Layer() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WarningDataForClient*, uintptr_t))(Il2CppBase() + 0x112D2E0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WarningDataForClient*, uintptr_t))(Il2CppBase() + 0x112D344))(this, reader);
	}

};

