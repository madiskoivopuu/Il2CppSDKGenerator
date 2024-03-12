#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class TrophyRoadWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadWindow"));
	}

	template <typename T = float> T& DelayToNextStep() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BuildButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BuildButtonAnimator() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BuildButtonErrorText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BuildButtonText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BuildProgressImage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ItemName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CityLevelText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& PopulationText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TaxValueText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& NPCImage() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& dialogueAnimator() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ElderDialogueRoot() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& DialogueBottomIconsRoot() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ElderDialogueText() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& BonusesRect() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& BonusTextItemPrefab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& NewRecipesViewDelay() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& IsInited() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bonuses() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& _startBuild() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& _levelTextKey() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& _buildTextKey() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& _clearTextKey() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& _notReadyTextKey() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppString*> T& _mainBonusTextKey() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = bool> T get_IsInited() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102961C))(this);
	}
	template <typename T = void> T set_IsInited(bool value) {
		return ((T (*)(TrophyRoadWindow*, bool))(Il2CppBase() + 0x1029624))(this, value);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x1029630))(this);
	}
	template <typename T = void> T InitTropyRoad() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x10299F4))(this);
	}
	template <typename T = void> T ShowCurrentStep() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x1029CB8))(this);
	}
	template <typename T = void> T ShowAccountInfo(uintptr_t step, int32_t districtLevel) {
		return ((T (*)(TrophyRoadWindow*, uintptr_t, int32_t))(Il2CppBase() + 0x102A59C))(this, step, districtLevel);
	}
	template <typename T = bool> T OnBuildStart() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102ACE4))(this);
	}
	template <typename T = uintptr_t> T UpdateBuildProgress() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102B014))(this);
	}
	template <typename T = void> T OnBuildFinish() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102B08C))(this);
	}
	template <typename T = uintptr_t> T WaitToShowNextStep() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102B4C0))(this);
	}
	template <typename T = void> T OnAfterBuildFinished() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102B0C4))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102977C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(TrophyRoadWindow*, float))(Il2CppBase() + 0x102B6C4))(this, deltaTime);
	}
	template <typename T = void> T ShowBonuses(uintptr_t step) {
		return ((T (*)(TrophyRoadWindow*, uintptr_t))(Il2CppBase() + 0x102A060))(this, step);
	}
	template <typename T = void> T UpdateElderDialogue(uintptr_t step, int32_t currentLevel) {
		return ((T (*)(TrophyRoadWindow*, uintptr_t, int32_t))(Il2CppBase() + 0x102A800))(this, step, currentLevel);
	}
	template <typename T = void> T ShowPreview(uintptr_t step, int32_t districtLevel) {
		return ((T (*)(TrophyRoadWindow*, uintptr_t, int32_t))(Il2CppBase() + 0x102A548))(this, step, districtLevel);
	}
	template <typename T = void> T HidePreview() {
		return ((T (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102B538))(this);
	}
	template <typename T = void> T SetAnimation(uintptr_t step, bool isShow) {
		return ((T (*)(TrophyRoadWindow*, uintptr_t, bool))(Il2CppBase() + 0x102B750))(this, step, isShow);
	}
	template <typename T = void> T CameraFollow(uintptr_t step, bool reset) {
		return ((T (*)(TrophyRoadWindow*, uintptr_t, bool))(Il2CppBase() + 0x102A948))(this, step, reset);
	}

};

}
