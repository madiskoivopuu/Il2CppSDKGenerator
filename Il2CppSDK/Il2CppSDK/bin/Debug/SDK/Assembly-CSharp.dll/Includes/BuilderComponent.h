#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderComponent"));
	}

	template <typename T = Il2CppString*> T& EntityName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& GhostEntityName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Upgrade() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& DestroyEntityName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& TakeCondition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint8_t> T& Orientation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& OnBorder() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& NoRotation() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = bool> T& NoPickup() {
		return *(T*)((uintptr_t)this + 0x3B);
	}
	template <typename T = bool> T& NoMove() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& CanDisassemble() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& OneInCell() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = bool> T& OnGround() {
		return *(T*)((uintptr_t)this + 0x3F);
	}
	template <typename T = uint8_t> T& SizeX() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint8_t> T& SizeY() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& Checkerboard() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = bool> T& Hidden() {
		return *(T*)((uintptr_t)this + 0x43);
	}
	template <typename T = bool> T& Repair() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& MakeEnemy() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = BuildEntityType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = BuilderMode*> T& BuilderMode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(BuilderComponent*, Il2CppObject*))(Il2CppBase() + 0x15A7E64))(this, targetObject);
	}

};

