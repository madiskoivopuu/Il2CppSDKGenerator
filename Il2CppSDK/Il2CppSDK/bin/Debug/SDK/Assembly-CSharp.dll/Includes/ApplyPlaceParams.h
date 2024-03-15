#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyPlaceParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyPlaceParams"));
	}

	template <typename R = Il2CppString*> R& TargetUniqueName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = SpawnerSource*> R& SpawnerSource() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = CenterSource*> R& CenterSource() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = RotationSource*> R& RotationSource() {
		return *(R*)((uintptr_t)this + 0x1A);
	}
	template <typename R = MoveToSource*> R& MoveToSource() {
		return *(R*)((uintptr_t)this + 0x1B);
	}
	template <typename R = WeaponSource*> R& WeaponSource() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = BindTarget*> R& BindTo() {
		return *(R*)((uintptr_t)this + 0x1D);
	}
	template <typename R = bool> R& IndependentDamager() {
		return *(R*)((uintptr_t)this + 0x1E);
	}
	template <typename R = float> R& CenterOffset() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& SaveableCondition() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& PersonalCondition() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& WallTrace() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& InLocationArea() {
		return *(R*)((uintptr_t)this + 0x39);
	}
	template <typename R = bool> R& UseActionTargets() {
		return *(R*)((uintptr_t)this + 0x3A);
	}
	template <typename R = Il2CppString*> R& UnplaceTag() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ApplyPlaceParams*> static R& DefaultForAction() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ApplyPlaceParams*> static R& DefaultForMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}


};

