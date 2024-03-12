#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProductionWorkComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProductionWorkComponent"));
	}

	template <typename T = Il2CppString*> T& WorkerUniqueLookup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& WorkerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& KillerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsWorkerDead() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& DeathPositionX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& DeathPositionY() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ProductionWorkComponent*, uintptr_t))(Il2CppBase() + 0x16E4E50))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ProductionWorkComponent*, uintptr_t))(Il2CppBase() + 0x16E4F24))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ProductionWorkComponent*, uintptr_t))(Il2CppBase() + 0x16E5070))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(ProductionWorkComponent*, uintptr_t))(Il2CppBase() + 0x16E50F8))(this, blueprintComponent);
	}

};

}
