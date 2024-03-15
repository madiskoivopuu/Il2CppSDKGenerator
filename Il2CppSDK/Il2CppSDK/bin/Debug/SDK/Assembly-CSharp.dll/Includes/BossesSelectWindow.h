#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BossesSelectWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossesSelectWindow"));
	}

	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _containerScroll() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _backBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _selectBtn() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	 Il2CppList<BossView*>*& _bossViews() {
		return *(Il2CppList<BossView*>**)((uintptr_t)this + 0x98);
	}
	template <typename R = BossView*> R& _bossViewPrefab() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = BossDetailView*> R& _bossDetailView() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = JoystickDPad*> R& D_Pad() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _contentRectTransform() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _viewportRectTransform() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	 Il2CppDictionary<int32_t, IClickable*>*& ClickableItems() {
		return *(Il2CppDictionary<int32_t, IClickable*>**)((uintptr_t)this + 0xC8);
	}
	template <typename R = int32_t> R& _gridWidth() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = float> R& _gridCellWidthWithSpacing() {
		return *(R*)((uintptr_t)this + 0xD4);
	}
	template <typename R = BossView*> R& _selectedView() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = BossView*> R& _activeView() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = Il2CppString*> R& _activeName() {
		return *(R*)((uintptr_t)this + 0xE8);
	}

	 Il2CppDictionary<int32_t, IClickable*>* get_ClickableItems() {
		return ((Il2CppDictionary<int32_t, IClickable*>* (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF470))(this);
	}
	template <typename R = void> R set_ClickableItems(Il2CppDictionary<int32_t, IClickable*>* value) {
		return ((R (*)(BossesSelectWindow*, Il2CppDictionary<int32_t, IClickable*>*))(Il2CppBase() + 0x16CF478))(this, value);
	}
	template <typename R = uintptr_t> R get_ContentRectTransform() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF480))(this);
	}
	template <typename R = uintptr_t> R get_ViewportRectTransform() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF488))(this);
	}
	template <typename R = int32_t> R get_GridWidth() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF490))(this);
	}
	template <typename R = bool> R get__isOverlaped() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF52C))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF558))(this);
	}
	template <typename R = void> R BackButtonClicked() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF644))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF6BC))(this);
	}
	template <typename R = void> R OnBossViewClick(BossView* bossView) {
		return ((R (*)(BossesSelectWindow*, BossView*))(Il2CppBase() + 0x16D05B0))(this, bossView);
	}
	template <typename R = void> R OnBossInfoViewClick(BossView* bossView) {
		return ((R (*)(BossesSelectWindow*, BossView*))(Il2CppBase() + 0x16D06FC))(this, bossView);
	}
	template <typename R = void> R OnFilterButtonClick(Nullable1Difficulty*>* filter) {
		return ((R (*)(BossesSelectWindow*, Nullable1Difficulty*>*))(Il2CppBase() + 0x16D07F8))(this, filter);
	}
	template <typename R = void> R OnSelectClick() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D0A00))(this);
	}
	template <typename R = bool> R CanActivateBoss(GameEntity* avatar) {
		return ((R (*)(BossesSelectWindow*, GameEntity*))(Il2CppBase() + 0x16D0AB0))(this, avatar);
	}
	template <typename R = void> R ShowActiveBoss() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D0308))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BossesSelectWindow*, float))(Il2CppBase() + 0x16D0B84))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(BossesSelectWindow*, float))(Il2CppBase() + 0x16D0C98))(this, deltaTime);
	}
	template <typename R = void> R OnLeft() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D0D44))(this);
	}
	template <typename R = void> R OnRight() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D0FFC))(this);
	}
	template <typename R = void> R OnTop() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D1118))(this);
	}
	template <typename R = void> R OnBottom() {
		return ((R (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D111C))(this);
	}
	template <typename R = void> R ChangeScrollPosition(int32_t nextIndex) {
		return ((R (*)(BossesSelectWindow*, int32_t))(Il2CppBase() + 0x16D0E64))(this, nextIndex);
	}
	template <typename R = bool> R OnLeftb__39_0(KeyValuePair2int32_t, IClickable*>* i) {
		return ((R (*)(BossesSelectWindow*, KeyValuePair2int32_t, IClickable*>*))(Il2CppBase() + 0x16D11B8))(this, i);
	}
	template <typename R = bool> R OnRightb__40_0(KeyValuePair2int32_t, IClickable*>* i) {
		return ((R (*)(BossesSelectWindow*, KeyValuePair2int32_t, IClickable*>*))(Il2CppBase() + 0x16D1290))(this, i);
	}

};

