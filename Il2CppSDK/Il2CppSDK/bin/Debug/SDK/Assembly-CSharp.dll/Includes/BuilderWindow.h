#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BuilderWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderWindow"));
	}

	template <typename R = uintptr_t> R& _buildTogglesRoot() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _buildCircleToggle() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _buildLeftToggle() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _buildRightToggle() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _buildUpToggle() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _buildDownToggle() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _buildFreeToggle() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = BuildTypeButtonView*> R& BuildTypeButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = BuildTypeButtonView*> R& FurnitureButton() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = BuilderToggleRoofButton*> R& RoofButton() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& DebugButton() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _buildResourcesRoot() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppArray<TextImageMonoBehaviour*>*> R& _buildResourceViews() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = PlacingView*> R& PlacingView() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = BuildUpgradeView*> R& BuildUpgradeView() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = FurnitureSelectView*> R& FurnitureSelectView() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = BuilderClickHandler*> R& BuilderClickHandler() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = BuilderCanPlace*> R& BuilderCanPlace() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = BuilderContainer*> R& BuilderContainer() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = BuilderMode*> R& CurrentBuilderMode() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = BuildMethod*> R& _currentBuildMethod() {
		return *(R*)((uintptr_t)this + 0x11C);
	}
	template <typename R = BuilderEntityView*> R& _selectedBuilderItem() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = GameEntity*> R& _ghost() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = GameDataEntity*> R& _currentBuildEntity() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = bool> R& _isPlaceClick() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = GameEntity*> R& _selectedEntity_Upgradable() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = GameEntity*> R& _selectedFurniture() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& _selector() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = int32_t> R& _buildCount() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = int32_t> static R& _maxAttempts() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _furnitureMaxAttempts() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 Nullable1int64_t>*& _waitResultTicks() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& _buildingCoroutine() {
		return *(R*)((uintptr_t)this + 0x170);
	}

	template <typename R = BuilderMode*> R get_CurrentBuilderMode() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15A9720))(this);
	}
	template <typename R = void> R set_CurrentBuilderMode(BuilderMode* value) {
		return ((R (*)(BuilderWindow*, BuilderMode*))(Il2CppBase() + 0x15A9728))(this, value);
	}
	template <typename R = bool> R get_IsGhostActive() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15A9730))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15A9740))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15A9DC8))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AA4E4))(this);
	}
	template <typename R = void> R OnBuildMethodChanged(BuildMethod* method) {
		return ((R (*)(BuilderWindow*, BuildMethod*))(Il2CppBase() + 0x15AAE70))(this, method);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BuilderWindow*, float))(Il2CppBase() + 0x15AAE7C))(this, deltaTime);
	}
	template <typename R = void> R OnPlaceClickHandler(uintptr_t position) {
		return ((R (*)(BuilderWindow*, uintptr_t))(Il2CppBase() + 0x15AB320))(this, position);
	}
	template <typename R = void> R ProcessUpgradeBuild(uintptr_t position) {
		return ((R (*)(BuilderWindow*, uintptr_t))(Il2CppBase() + 0x15AC160))(this, position);
	}
	template <typename R = void> R ProcessSelectFurniture(uintptr_t position) {
		return ((R (*)(BuilderWindow*, uintptr_t))(Il2CppBase() + 0x15AC410))(this, position);
	}
	template <typename R = void> R ShowBuildView() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AD140))(this);
	}
	template <typename R = void> R HideBuildView() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AD2B4))(this);
	}
	template <typename R = void> R ShowPlacingView() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AD36C))(this);
	}
	template <typename R = void> R HidePlacingView() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AD3B8))(this);
	}
	template <typename R = void> R ShowUpgradeView() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AD420))(this);
	}
	template <typename R = void> R HideUpgradeView() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AD304))(this);
	}
	template <typename R = void> R ShowFurnitureSelectView() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AD450))(this);
	}
	template <typename R = void> R HideFurnitureSelectView() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AD334))(this);
	}
	template <typename R = void> R StartBuild() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15A9F34))(this);
	}
	template <typename R = void> R StopBuild() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AAAD8))(this);
	}
	template <typename R = GameEntity*> static R GetEntityOrCreate(Il2CppString* uniqueLookup, bool isHidden) {
		return ((R (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x15AD538))(0, uniqueLookup, isHidden);
	}
	template <typename R = void> R StartPlacing(GameDataEntity* buildEntity) {
		return ((R (*)(BuilderWindow*, GameDataEntity*))(Il2CppBase() + 0x15AD854))(this, buildEntity);
	}
	template <typename R = uintptr_t> R Building() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15ADCDC))(this);
	}
	template <typename R = void> R UpdateAccountResources(bool initIcon) {
		return ((R (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15ADD54))(this, initIcon);
	}
	template <typename R = void> R StopWaitBuilding(int64_t ticks) {
		return ((R (*)(BuilderWindow*, int64_t))(Il2CppBase() + 0x15AE024))(this, ticks);
	}
	template <typename R = void> R GetAllBordersCost(IDictionary2Vec2*, int32_t>* points, float x, float y, float initialX, float initialY) {
		return ((R (*)(BuilderWindow*, IDictionary2Vec2*, int32_t>*, float, float, float, float))(Il2CppBase() + 0x15AE094))(this, points, x, y, initialX, initialY);
	}
	template <typename R = int32_t> R GetBorderCost(float x, float y, bool ignoreWalls) {
		return ((R (*)(BuilderWindow*, float, float, bool))(Il2CppBase() + 0x15AE6BC))(this, x, y, ignoreWalls);
	}
	template <typename R = void> R RotatePlacing() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AE9A4))(this);
	}
	template <typename R = void> R ConfirmPlacing() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AEA98))(this);
	}
	template <typename R = void> R CancelPlacing() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AD718))(this);
	}
	template <typename R = void> R StartUpgrading(GameEntity* entity) {
		return ((R (*)(BuilderWindow*, GameEntity*))(Il2CppBase() + 0x15AC814))(this, entity);
	}
	template <typename R = void> R SetBuildMode(BuilderMode* currentMode) {
		return ((R (*)(BuilderWindow*, BuilderMode*))(Il2CppBase() + 0x15AB838))(this, currentMode);
	}
	template <typename R = void> R DestroyBuild() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AF468))(this);
	}
	template <typename R = void> R UpgradeBuild() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AFD6C))(this);
	}
	template <typename R = void> R SelectFurniture(GameEntity* entity) {
		return ((R (*)(BuilderWindow*, GameEntity*))(Il2CppBase() + 0x15ACEFC))(this, entity);
	}
	template <typename R = void> R OnDestroySelectedFurniture(uintptr_t entity) {
		return ((R (*)(BuilderWindow*, uintptr_t))(Il2CppBase() + 0x15B03A0))(this, entity);
	}
	template <typename R = void> R MoveFurniture() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15B04B4))(this);
	}
	template <typename R = void> R CreateGhost(GameEntity* selectedFurniture, bool isPlaceClick) {
		return ((R (*)(BuilderWindow*, GameEntity*, bool))(Il2CppBase() + 0x15B04F8))(this, selectedFurniture, isPlaceClick);
	}
	template <typename R = void> R CreateGhost_1(GameDataEntity* buildEntity, Vec2* position, bool isPlaceClick) {
		return ((R (*)(BuilderWindow*, GameDataEntity*, Vec2*, bool))(Il2CppBase() + 0x15ADAA4))(this, buildEntity, position, isPlaceClick);
	}
	template <typename R = bool> R IsFurnitureNotEmpty(GameEntity* furniture) {
		return ((R (*)(BuilderWindow*, GameEntity*))(Il2CppBase() + 0x15B0748))(this, furniture);
	}
	template <typename R = void> R UpdateSelector(GameEntity* target) {
		return ((R (*)(BuilderWindow*, GameEntity*))(Il2CppBase() + 0x15AEEFC))(this, target);
	}
	template <typename R = void> R DestroySelector() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15AD474))(this);
	}
	template <typename R = void> R OnItemClick(BuilderEntityView* item) {
		return ((R (*)(BuilderWindow*, BuilderEntityView*))(Il2CppBase() + 0x15A8F9C))(this, item);
	}
	template <typename R = void> R SetSelectedVisible(GameEntity* entity, bool visible) {
		return ((R (*)(BuilderWindow*, GameEntity*, bool))(Il2CppBase() + 0x15AEAE4))(this, entity, visible);
	}
	template <typename R = void> R Awakeb__40_0() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15B098C))(this);
	}
	template <typename R = void> R Awakeb__40_1() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15B09F8))(this);
	}
	template <typename R = void> R Awakeb__40_2() {
		return ((R (*)(BuilderWindow*))(Il2CppBase() + 0x15B0A64))(this);
	}
	template <typename R = void> R Awakeb__40_3(bool isOn) {
		return ((R (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0A6C))(this, isOn);
	}
	template <typename R = void> R Awakeb__40_4(bool isOn) {
		return ((R (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0A80))(this, isOn);
	}
	template <typename R = void> R Awakeb__40_5(bool isOn) {
		return ((R (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0A94))(this, isOn);
	}
	template <typename R = void> R Awakeb__40_6(bool isOn) {
		return ((R (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0AA8))(this, isOn);
	}
	template <typename R = void> R Awakeb__40_7(bool isOn) {
		return ((R (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0ABC))(this, isOn);
	}
	template <typename R = void> R Awakeb__40_8(bool isOn) {
		return ((R (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0ACC))(this, isOn);
	}
	template <typename R = void> R StartUpgradingb__68_0(uintptr_t e) {
		return ((R (*)(BuilderWindow*, uintptr_t))(Il2CppBase() + 0x15B0AE0))(this, e);
	}

};

