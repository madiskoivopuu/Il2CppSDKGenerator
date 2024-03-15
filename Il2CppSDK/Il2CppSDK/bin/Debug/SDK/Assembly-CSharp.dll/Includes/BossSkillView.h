#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossSkillView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossSkillView"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& ButtonOpen() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& DetailPanel() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& AnimTime() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& IconEventTrigger() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& ChapterText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Il2CppList<BossSkillView*>*& SkillPanels() {
		return *(Il2CppList<BossSkillView*>**)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& _isAnimState() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = bool> R& _isOpenAnim() {
		return *(R*)((uintptr_t)this + 0x69);
	}
	template <typename R = bool> R& _lockMoveDown() {
		return *(R*)((uintptr_t)this + 0x6A);
	}
	template <typename R = uintptr_t> R& _mainScroll() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _scrollRect() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = VideoPreviewView*> R& _videoPreviewView() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = float> R& _videoTooltipPressedTime() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _tooltipPosition() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = Il2CppString*> R& _currentVideo() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(BossSkillView*))(Il2CppBase() + 0x16CD00C))(this);
	}
	template <typename R = void> R Init(Il2CppString* icon, Il2CppString* caption, Il2CppString* description, Il2CppString* chapter, Il2CppString* video, uintptr_t mainScroll, Il2CppArray<SkillDescription*>* innerSkills, VideoPreviewView* videoPreviewView) {
		return ((R (*)(BossSkillView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppArray<SkillDescription*>*, VideoPreviewView*))(Il2CppBase() + 0x16CB6D8))(this, icon, caption, description, chapter, video, mainScroll, innerSkills, videoPreviewView);
	}
	template <typename R = void> R SetupInnerSkills(Il2CppArray<SkillDescription*>* innerSkills) {
		return ((R (*)(BossSkillView*, Il2CppArray<SkillDescription*>*))(Il2CppBase() + 0x16CD288))(this, innerSkills);
	}
	template <typename R = void> R OnStateButtonClicked() {
		return ((R (*)(BossSkillView*))(Il2CppBase() + 0x16CD5A0))(this);
	}
	template <typename R = void> R UpdateLayout() {
		return ((R (*)(BossSkillView*))(Il2CppBase() + 0x16CD7D0))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(BossSkillView*))(Il2CppBase() + 0x16CDA08))(this);
	}
	template <typename R = void> R Awakeb__19_0(uintptr_t arg0) {
		return ((R (*)(BossSkillView*, uintptr_t))(Il2CppBase() + 0x16CDB84))(this, arg0);
	}
	template <typename R = void> R Awakeb__19_1(uintptr_t arg0) {
		return ((R (*)(BossSkillView*, uintptr_t))(Il2CppBase() + 0x16CDC58))(this, arg0);
	}

};

