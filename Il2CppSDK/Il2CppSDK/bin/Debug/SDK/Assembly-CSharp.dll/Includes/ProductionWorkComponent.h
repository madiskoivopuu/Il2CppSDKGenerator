#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProductionWorkComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProductionWorkComponent"));
	}

	template <typename R = Il2CppString*> R& WorkerUniqueLookup() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& WorkerName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& KillerName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& IsWorkerDead() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& DeathPositionX() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& DeathPositionY() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ProductionWorkComponent*, Il2CppObject*))(Il2CppBase() + 0x16E4E50))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ProductionWorkComponent*, uintptr_t))(Il2CppBase() + 0x16E4F24))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ProductionWorkComponent*, uintptr_t))(Il2CppBase() + 0x16E5070))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(ProductionWorkComponent*, Il2CppObject*))(Il2CppBase() + 0x16E50F8))(this, blueprintComponent);
	}

};

