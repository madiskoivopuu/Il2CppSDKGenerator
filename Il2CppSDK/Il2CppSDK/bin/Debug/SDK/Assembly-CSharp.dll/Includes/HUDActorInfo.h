#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDActorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDActorInfo"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& LevelText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& ClassNameText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& HPBarImage() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& HPPredictionBarImage() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ShieldBarImage() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& HPText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& HungerText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& ThirstText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& PowerText() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& AttackSpeedText() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& ArmorText() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& AttackDamageText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& MoveSpeedText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = TooltipProxy*> R& TooltipProxy() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& TenacityBarRoot() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& TenacityBarImage() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& TenacityPredictionBarImage() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& MountIcon() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& MountRarityIcon() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& PetPanel() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& PetIcon() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& PetRarityIcon() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& DPSText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& GreenColor() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& RedColor() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& YellowColor() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = int32_t> R& _oldHungerValue() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = int32_t> R& _oldThirstValue() {
		return *(R*)((uintptr_t)this + 0x10C);
	}
	 Nullable1float>*& _oldPowerValue() {
		return *(Nullable1float>**)((uintptr_t)this + 0x110);
	}
	 Nullable1float>*& _oldAttackDamage() {
		return *(Nullable1float>**)((uintptr_t)this + 0x118);
	}
	 Nullable1float>*& _oldArmor() {
		return *(Nullable1float>**)((uintptr_t)this + 0x120);
	}
	 Nullable1float>*& _oldAttackSpeed() {
		return *(Nullable1float>**)((uintptr_t)this + 0x128);
	}
	 Nullable1float>*& _oldMoveSpeed() {
		return *(Nullable1float>**)((uintptr_t)this + 0x130);
	}
	template <typename R = Il2CppString*> R& _oldName() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	 Nullable1int32_t>*& _oldLvl() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x140);
	}
	template <typename R = Il2CppString*> R& _oldPetName() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = Il2CppString*> R& _oldMountName() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	 Nullable1float>*& _oldHpCoef() {
		return *(Nullable1float>**)((uintptr_t)this + 0x158);
	}
	 Nullable1float>*& _oldMaxHealth() {
		return *(Nullable1float>**)((uintptr_t)this + 0x160);
	}
	 Nullable1float>*& _oldHealth() {
		return *(Nullable1float>**)((uintptr_t)this + 0x168);
	}
	 Nullable1float>*& _oldShield() {
		return *(Nullable1float>**)((uintptr_t)this + 0x170);
	}
	 Nullable1float>*& _oldHealPrediction() {
		return *(Nullable1float>**)((uintptr_t)this + 0x178);
	}
	template <typename R = Il2CppString*> R& _oldClassName() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = float> R& _oldDPS() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = bool> R& CanShowMountPanel() {
		return *(R*)((uintptr_t)this + 0x18C);
	}
	template <typename R = bool> R& _showShield() {
		return *(R*)((uintptr_t)this + 0x18D);
	}
	template <typename R = bool> R& _showHealPrediction() {
		return *(R*)((uintptr_t)this + 0x18E);
	}

	template <typename R = bool> R get_CanShowMountPanel() {
		return ((R (*)(HUDActorInfo*))(Il2CppBase() + 0x144859C))(this);
	}
	template <typename R = void> R set_CanShowMountPanel(bool value) {
		return ((R (*)(HUDActorInfo*, bool))(Il2CppBase() + 0x14485A4))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(HUDActorInfo*))(Il2CppBase() + 0x14485B0))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(HUDActorInfo*))(Il2CppBase() + 0x1448644))(this);
	}
	template <typename R = void> R Init(TooltipView* tooltip) {
		return ((R (*)(HUDActorInfo*, TooltipView*))(Il2CppBase() + 0x14487E8))(this, tooltip);
	}
	template <typename R = void> R Draw(GameEntity* actor) {
		return ((R (*)(HUDActorInfo*, GameEntity*))(Il2CppBase() + 0x144889C))(this, actor);
	}

};

