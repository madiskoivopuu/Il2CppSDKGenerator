#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SyncWorldNameAndConfigData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SyncWorldNameAndConfigData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = ConfigFromServer*> R& Config() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SyncWorldNameAndConfigData*, uintptr_t))(Il2CppBase() + 0x16A2D1C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SyncWorldNameAndConfigData*, uintptr_t))(Il2CppBase() + 0x16A2D70))(this, reader);
	}

};

