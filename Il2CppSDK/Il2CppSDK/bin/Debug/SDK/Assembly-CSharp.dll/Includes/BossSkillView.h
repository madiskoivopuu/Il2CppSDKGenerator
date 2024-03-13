#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossSkillView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossSkillView"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ButtonOpen() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& DetailPanel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& AnimTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& IconEventTrigger() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ChapterText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<BossSkillView*>*> T& SkillPanels() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _isAnimState() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _isOpenAnim() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = bool> T& _lockMoveDown() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = uintptr_t> T& _mainScroll() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _scrollRect() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = VideoPreviewView*> T& _videoPreviewView() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _videoTooltipPressedTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _tooltipPosition() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& _currentVideo() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossSkillView*))(Il2CppBase() + 0x16CD00C))(this);
	}
	template <typename T = void> T Init(Il2CppString* icon, Il2CppString* caption, Il2CppString* description, Il2CppString* chapter, Il2CppString* video, uintptr_t mainScroll, Il2CppArray<uintptr_t>* innerSkills, VideoPreviewView* videoPreviewView) {
		return ((T (*)(BossSkillView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, VideoPreviewView*))(Il2CppBase() + 0x16CB6D8))(this, icon, caption, description, chapter, video, mainScroll, innerSkills, videoPreviewView);
	}
	template <typename T = void> T SetupInnerSkills(Il2CppArray<uintptr_t>* innerSkills) {
		return ((T (*)(BossSkillView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16CD288))(this, innerSkills);
	}
	template <typename T = void> T OnStateButtonClicked() {
		return ((T (*)(BossSkillView*))(Il2CppBase() + 0x16CD5A0))(this);
	}
	template <typename T = void> T UpdateLayout() {
		return ((T (*)(BossSkillView*))(Il2CppBase() + 0x16CD7D0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BossSkillView*))(Il2CppBase() + 0x16CDA08))(this);
	}
	template <typename T = void> T Awakeb__19_0(uintptr_t arg0) {
		return ((T (*)(BossSkillView*, uintptr_t))(Il2CppBase() + 0x16CDB84))(this, arg0);
	}
	template <typename T = void> T Awakeb__19_1(uintptr_t arg0) {
		return ((T (*)(BossSkillView*, uintptr_t))(Il2CppBase() + 0x16CDC58))(this, arg0);
	}

};

