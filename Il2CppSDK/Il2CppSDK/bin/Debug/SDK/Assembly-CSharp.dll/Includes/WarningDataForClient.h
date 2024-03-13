#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningDataForClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningDataForClient"));
	}

	template <typename T = ServiceMessage*> T& Message() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = MessageLayer*> T& Layer() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WarningDataForClient*, uintptr_t))(Il2CppBase() + 0x112D2E0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WarningDataForClient*, uintptr_t))(Il2CppBase() + 0x112D344))(this, reader);
	}

};

