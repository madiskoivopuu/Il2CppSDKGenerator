#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProductionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProductionComponent"));
	}

	template <typename R = Il2CppString*> R& HideMagic() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& LoadedMagic() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& FearMagic() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& BubbleLifetime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& CanGoThrowDoors() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = Il2CppString*> R& LeavepointBlueprint() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<Leavepoint>*> R& Leavepoints() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ProductionComponent*, Il2CppObject*))(Il2CppBase() + 0x16E4D60))(this, targetObject);
	}

};

