#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationModeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationModeComponent"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& DifficultyIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& LootIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& PvPName() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(LocationModeComponent*, uintptr_t))(Il2CppBase() + 0x17BA6F8))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LocationModeComponent*, uintptr_t))(Il2CppBase() + 0x17BA7D8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LocationModeComponent*, uintptr_t))(Il2CppBase() + 0x17BA95C))(this, writer);
	}

};

}
