#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyPlaceParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyPlaceParams"));
	}

	template <typename T = Il2CppString*> T& TargetUniqueName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = SpawnerSource*> T& SpawnerSource() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = CenterSource*> T& CenterSource() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = RotationSource*> T& RotationSource() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = MoveToSource*> T& MoveToSource() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = WeaponSource*> T& WeaponSource() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = BindTarget*> T& BindTo() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& IndependentDamager() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = float> T& CenterOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& SaveableCondition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& PersonalCondition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& WallTrace() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& InLocationArea() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& UseActionTargets() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = Il2CppString*> T& UnplaceTag() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ApplyPlaceParams*> static T& DefaultForAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ApplyPlaceParams*> static T& DefaultForMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}


};

