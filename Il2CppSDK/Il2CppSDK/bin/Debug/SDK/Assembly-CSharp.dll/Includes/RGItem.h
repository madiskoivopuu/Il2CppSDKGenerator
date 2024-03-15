#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RGItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGItem"));
	}

	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& SourceCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Resource() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Creatures() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& Chance() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& UseShamanChance() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& MinCount() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = int32_t> R& MaxCount() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	 Nullable1float>*& MinDurability() {
		return *(Nullable1float>**)((uintptr_t)this + 0x50);
	}
	 Nullable1float>*& MaxDurability() {
		return *(Nullable1float>**)((uintptr_t)this + 0x58);
	}

	template <typename R = bool> R IsValid(ICommonContexts* world, AccountEntity* account, GameEntity* avatar, GameEntity* source) {
		return ((R (*)(RGItem*, ICommonContexts*, AccountEntity*, GameEntity*, GameEntity*))(Il2CppBase() + 0x10BF2E8))(this, world, account, avatar, source);
	}

};

