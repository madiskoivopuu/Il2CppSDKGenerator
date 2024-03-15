#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderComponent"));
	}

	template <typename R = Il2CppString*> R& EntityName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& GhostEntityName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Upgrade() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& DestroyEntityName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& TakeCondition() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uint8_t> R& Orientation() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& OnBorder() {
		return *(R*)((uintptr_t)this + 0x39);
	}
	template <typename R = bool> R& NoRotation() {
		return *(R*)((uintptr_t)this + 0x3A);
	}
	template <typename R = bool> R& NoPickup() {
		return *(R*)((uintptr_t)this + 0x3B);
	}
	template <typename R = bool> R& NoMove() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = bool> R& CanDisassemble() {
		return *(R*)((uintptr_t)this + 0x3D);
	}
	template <typename R = bool> R& OneInCell() {
		return *(R*)((uintptr_t)this + 0x3E);
	}
	template <typename R = bool> R& OnGround() {
		return *(R*)((uintptr_t)this + 0x3F);
	}
	template <typename R = uint8_t> R& SizeX() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uint8_t> R& SizeY() {
		return *(R*)((uintptr_t)this + 0x41);
	}
	template <typename R = bool> R& Checkerboard() {
		return *(R*)((uintptr_t)this + 0x42);
	}
	template <typename R = bool> R& Hidden() {
		return *(R*)((uintptr_t)this + 0x43);
	}
	template <typename R = bool> R& Repair() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = bool> R& MakeEnemy() {
		return *(R*)((uintptr_t)this + 0x45);
	}
	template <typename R = BuildEntityType> R& Type() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = BuilderMode> R& BuilderMode() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = Il2CppArray<Resource>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BuilderComponent*, Il2CppObject*))(Il2CppBase() + 0x15A7E64))(this, targetObject);
	}

};

