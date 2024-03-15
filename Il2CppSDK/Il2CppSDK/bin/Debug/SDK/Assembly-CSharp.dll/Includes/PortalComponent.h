#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& ExitTagIn() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& ExitTagOut() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& ToLocationName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& Disabled() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& WithoutParent() {
		return *(R*)((uintptr_t)this + 0x31);
	}
	template <typename R = float> R& ShieldRevealTime() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = Il2CppArray<Vec2SL*>*> R& Points() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& PointIndex() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& ToGlobalMap() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = bool> R& SkipGlobalMap() {
		return *(R*)((uintptr_t)this + 0x45);
	}

	template <typename R = Vec2*> R GetPoint() {
		return ((R (*)(PortalComponent*))(Il2CppBase() + 0x1576D88))(this);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PortalComponent*, Il2CppObject*))(Il2CppBase() + 0x1576E18))(this, targetObject);
	}

};

