#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SyncWorldNameAndConfigData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SyncWorldNameAndConfigData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ConfigFromServer*> T& Config() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SyncWorldNameAndConfigData*, uintptr_t))(Il2CppBase() + 0x16A2D1C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SyncWorldNameAndConfigData*, uintptr_t))(Il2CppBase() + 0x16A2D70))(this, reader);
	}

};

