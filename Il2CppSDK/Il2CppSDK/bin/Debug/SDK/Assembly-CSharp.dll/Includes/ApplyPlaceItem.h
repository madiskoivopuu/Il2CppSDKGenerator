#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyPlaceItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyPlaceItem"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Magic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Chance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& ActorCondition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Nullable1float>*> T& DamageCoef() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Nullable1float>*> T& MaxHealthCoef() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& PushOutRadius() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& AutoDestruction() {
		return *(T*)((uintptr_t)this + 0x64);
	}


};

