#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyPlaceItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyPlaceItem"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Magic() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& Rotation() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = float> R& Chance() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& ActorCondition() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Nullable1float>*& DamageCoef() {
		return *(Nullable1float>**)((uintptr_t)this + 0x50);
	}
	 Nullable1float>*& MaxHealthCoef() {
		return *(Nullable1float>**)((uintptr_t)this + 0x58);
	}
	template <typename R = float> R& PushOutRadius() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = float> R& AutoDestruction() {
		return *(R*)((uintptr_t)this + 0x64);
	}


};

