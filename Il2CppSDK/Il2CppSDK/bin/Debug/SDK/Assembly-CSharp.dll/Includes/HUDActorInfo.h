#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDActorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDActorInfo"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LevelText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ClassNameText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& HPBarImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& HPPredictionBarImage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ShieldBarImage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& HPText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& HungerText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ThirstText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& PowerText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& AttackSpeedText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ArmorText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& AttackDamageText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& MoveSpeedText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = TooltipProxy*> T& TooltipProxy() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TenacityBarRoot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TenacityBarImage() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TenacityPredictionBarImage() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& MountIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& MountRarityIcon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& PetPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& PetIcon() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& PetRarityIcon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& DPSText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& GreenColor() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& RedColor() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& YellowColor() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& _oldHungerValue() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& _oldThirstValue() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Nullable1float>*> T& _oldPowerValue() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Nullable1float>*> T& _oldAttackDamage() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Nullable1float>*> T& _oldArmor() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Nullable1float>*> T& _oldAttackSpeed() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Nullable1float>*> T& _oldMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& _oldName() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Nullable1int32_t>*> T& _oldLvl() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppString*> T& _oldPetName() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppString*> T& _oldMountName() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Nullable1float>*> T& _oldHpCoef() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Nullable1float>*> T& _oldMaxHealth() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Nullable1float>*> T& _oldHealth() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Nullable1float>*> T& _oldShield() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Nullable1float>*> T& _oldHealPrediction() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppString*> T& _oldClassName() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& _oldDPS() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& CanShowMountPanel() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = bool> T& _showShield() {
		return *(T*)((uintptr_t)this + 0x18D);
	}
	template <typename T = bool> T& _showHealPrediction() {
		return *(T*)((uintptr_t)this + 0x18E);
	}

	template <typename T = bool> T get_CanShowMountPanel() {
		return ((T (*)(HUDActorInfo*))(Il2CppBase() + 0x144859C))(this);
	}
	template <typename T = void> T set_CanShowMountPanel(bool value) {
		return ((T (*)(HUDActorInfo*, bool))(Il2CppBase() + 0x14485A4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HUDActorInfo*))(Il2CppBase() + 0x14485B0))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(HUDActorInfo*))(Il2CppBase() + 0x1448644))(this);
	}
	template <typename T = void> T Init(TooltipView* tooltip) {
		return ((T (*)(HUDActorInfo*, TooltipView*))(Il2CppBase() + 0x14487E8))(this, tooltip);
	}
	template <typename T = void> T Draw(GameEntity* actor) {
		return ((T (*)(HUDActorInfo*, GameEntity*))(Il2CppBase() + 0x144889C))(this, actor);
	}

};

