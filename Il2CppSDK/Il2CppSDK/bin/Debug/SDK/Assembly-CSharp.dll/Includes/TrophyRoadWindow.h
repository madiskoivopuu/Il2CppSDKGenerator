#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class TrophyRoadWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadWindow"));
	}

	template <typename R = float> R& DelayToNextStep() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = DelayedButton*> R& BuildButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& BuildButtonAnimator() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& BuildButtonErrorText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& BuildButtonText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& BuildProgressImage() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& ItemName() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& CityLevelText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& PopulationText() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& TaxValueText() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& NPCImage() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& dialogueAnimator() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& ElderDialogueRoot() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& DialogueBottomIconsRoot() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& ElderDialogueText() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& BonusesRect() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = TextMonoBehaviour*> R& BonusTextItemPrefab() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = float> R& NewRecipesViewDelay() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = bool> R& IsInited() {
		return *(R*)((uintptr_t)this + 0x10C);
	}
	 Il2CppList<TextMonoBehaviour*>*& _bonuses() {
		return *(Il2CppList<TextMonoBehaviour*>**)((uintptr_t)this + 0x110);
	}
	template <typename R = bool> R& _startBuild() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = Il2CppString*> R& _levelTextKey() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = Il2CppString*> R& _buildTextKey() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = Il2CppString*> R& _clearTextKey() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = Il2CppString*> R& _notReadyTextKey() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = Il2CppString*> R& _mainBonusTextKey() {
		return *(R*)((uintptr_t)this + 0x140);
	}

	template <typename R = bool> R get_IsInited() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102961C))(this);
	}
	template <typename R = void> R set_IsInited(bool value) {
		return ((R (*)(TrophyRoadWindow*, bool))(Il2CppBase() + 0x1029624))(this, value);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x1029630))(this);
	}
	template <typename R = void> R InitTropyRoad() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x10299F4))(this);
	}
	template <typename R = void> R ShowCurrentStep() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x1029CB8))(this);
	}
	template <typename R = void> R ShowAccountInfo(TrophyRoadEntity* step, int32_t districtLevel) {
		return ((R (*)(TrophyRoadWindow*, TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x102A59C))(this, step, districtLevel);
	}
	template <typename R = bool> R OnBuildStart() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102ACE4))(this);
	}
	template <typename R = uintptr_t> R UpdateBuildProgress() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102B014))(this);
	}
	template <typename R = void> R OnBuildFinish() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102B08C))(this);
	}
	template <typename R = uintptr_t> R WaitToShowNextStep() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102B4C0))(this);
	}
	template <typename R = void> R OnAfterBuildFinished() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102B0C4))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102977C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(TrophyRoadWindow*, float))(Il2CppBase() + 0x102B6C4))(this, deltaTime);
	}
	template <typename R = void> R ShowBonuses(TrophyRoadEntity* step) {
		return ((R (*)(TrophyRoadWindow*, TrophyRoadEntity*))(Il2CppBase() + 0x102A060))(this, step);
	}
	template <typename R = void> R UpdateElderDialogue(TrophyRoadEntity* step, int32_t currentLevel) {
		return ((R (*)(TrophyRoadWindow*, TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x102A800))(this, step, currentLevel);
	}
	template <typename R = void> R ShowPreview(TrophyRoadEntity* step, int32_t districtLevel) {
		return ((R (*)(TrophyRoadWindow*, TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x102A548))(this, step, districtLevel);
	}
	template <typename R = void> R HidePreview() {
		return ((R (*)(TrophyRoadWindow*))(Il2CppBase() + 0x102B538))(this);
	}
	template <typename R = void> R SetAnimation(TrophyRoadEntity* step, bool isShow) {
		return ((R (*)(TrophyRoadWindow*, TrophyRoadEntity*, bool))(Il2CppBase() + 0x102B750))(this, step, isShow);
	}
	template <typename R = void> R CameraFollow(TrophyRoadEntity* step, bool reset) {
		return ((R (*)(TrophyRoadWindow*, TrophyRoadEntity*, bool))(Il2CppBase() + 0x102A948))(this, step, reset);
	}

};

