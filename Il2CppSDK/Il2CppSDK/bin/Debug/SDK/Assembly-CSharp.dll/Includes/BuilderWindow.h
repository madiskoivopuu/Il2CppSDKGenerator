#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BuilderWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderWindow"));
	}

	template <typename T = uintptr_t> T& _buildTogglesRoot() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _buildCircleToggle() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _buildLeftToggle() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _buildRightToggle() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _buildUpToggle() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _buildDownToggle() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _buildFreeToggle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = BuildTypeButtonView*> T& BuildTypeButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = BuildTypeButtonView*> T& FurnitureButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = BuilderToggleRoofButton*> T& RoofButton() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& DebugButton() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _buildResourcesRoot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _buildResourceViews() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = PlacingView*> T& PlacingView() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = BuildUpgradeView*> T& BuildUpgradeView() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = FurnitureSelectView*> T& FurnitureSelectView() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = BuilderClickHandler*> T& BuilderClickHandler() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = BuilderCanPlace*> T& BuilderCanPlace() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = BuilderContainer*> T& BuilderContainer() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = BuilderMode*> T& CurrentBuilderMode() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = BuildMethod*> T& _currentBuildMethod() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = BuilderEntityView*> T& _selectedBuilderItem() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = GameEntity*> T& _ghost() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = GameDataEntity*> T& _currentBuildEntity() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& _isPlaceClick() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = GameEntity*> T& _selectedEntity_Upgradable() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = GameEntity*> T& _selectedFurniture() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _selector() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& _buildCount() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> static T& _maxAttempts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _furnitureMaxAttempts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Nullable1int64_t>*> T& _waitResultTicks() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _buildingCoroutine() {
		return *(T*)((uintptr_t)this + 0x170);
	}

	template <typename T = BuilderMode*> T get_CurrentBuilderMode() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15A9720))(this);
	}
	template <typename T = void> T set_CurrentBuilderMode(BuilderMode* value) {
		return ((T (*)(BuilderWindow*, BuilderMode*))(Il2CppBase() + 0x15A9728))(this, value);
	}
	template <typename T = bool> T get_IsGhostActive() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15A9730))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15A9740))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15A9DC8))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AA4E4))(this);
	}
	template <typename T = void> T OnBuildMethodChanged(BuildMethod* method) {
		return ((T (*)(BuilderWindow*, BuildMethod*))(Il2CppBase() + 0x15AAE70))(this, method);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BuilderWindow*, float))(Il2CppBase() + 0x15AAE7C))(this, deltaTime);
	}
	template <typename T = void> T OnPlaceClickHandler(uintptr_t position) {
		return ((T (*)(BuilderWindow*, uintptr_t))(Il2CppBase() + 0x15AB320))(this, position);
	}
	template <typename T = void> T ProcessUpgradeBuild(uintptr_t position) {
		return ((T (*)(BuilderWindow*, uintptr_t))(Il2CppBase() + 0x15AC160))(this, position);
	}
	template <typename T = void> T ProcessSelectFurniture(uintptr_t position) {
		return ((T (*)(BuilderWindow*, uintptr_t))(Il2CppBase() + 0x15AC410))(this, position);
	}
	template <typename T = void> T ShowBuildView() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AD140))(this);
	}
	template <typename T = void> T HideBuildView() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AD2B4))(this);
	}
	template <typename T = void> T ShowPlacingView() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AD36C))(this);
	}
	template <typename T = void> T HidePlacingView() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AD3B8))(this);
	}
	template <typename T = void> T ShowUpgradeView() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AD420))(this);
	}
	template <typename T = void> T HideUpgradeView() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AD304))(this);
	}
	template <typename T = void> T ShowFurnitureSelectView() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AD450))(this);
	}
	template <typename T = void> T HideFurnitureSelectView() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AD334))(this);
	}
	template <typename T = void> T StartBuild() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15A9F34))(this);
	}
	template <typename T = void> T StopBuild() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AAAD8))(this);
	}
	template <typename T = GameEntity*> static T GetEntityOrCreate(Il2CppString* uniqueLookup, bool isHidden) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x15AD538))(0, uniqueLookup, isHidden);
	}
	template <typename T = void> T StartPlacing(GameDataEntity* buildEntity) {
		return ((T (*)(BuilderWindow*, GameDataEntity*))(Il2CppBase() + 0x15AD854))(this, buildEntity);
	}
	template <typename T = uintptr_t> T Building() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15ADCDC))(this);
	}
	template <typename T = void> T UpdateAccountResources(bool initIcon) {
		return ((T (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15ADD54))(this, initIcon);
	}
	template <typename T = void> T StopWaitBuilding(int64_t ticks) {
		return ((T (*)(BuilderWindow*, int64_t))(Il2CppBase() + 0x15AE024))(this, ticks);
	}
	template <typename T = void> T GetAllBordersCost(IDictionary2Vec2*, int32_t>* points, float x, float y, float initialX, float initialY) {
		return ((T (*)(BuilderWindow*, IDictionary2Vec2*, int32_t>*, float, float, float, float))(Il2CppBase() + 0x15AE094))(this, points, x, y, initialX, initialY);
	}
	template <typename T = int32_t> T GetBorderCost(float x, float y, bool ignoreWalls) {
		return ((T (*)(BuilderWindow*, float, float, bool))(Il2CppBase() + 0x15AE6BC))(this, x, y, ignoreWalls);
	}
	template <typename T = void> T RotatePlacing() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AE9A4))(this);
	}
	template <typename T = void> T ConfirmPlacing() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AEA98))(this);
	}
	template <typename T = void> T CancelPlacing() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AD718))(this);
	}
	template <typename T = void> T StartUpgrading(GameEntity* entity) {
		return ((T (*)(BuilderWindow*, GameEntity*))(Il2CppBase() + 0x15AC814))(this, entity);
	}
	template <typename T = void> T SetBuildMode(BuilderMode* currentMode) {
		return ((T (*)(BuilderWindow*, BuilderMode*))(Il2CppBase() + 0x15AB838))(this, currentMode);
	}
	template <typename T = void> T DestroyBuild() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AF468))(this);
	}
	template <typename T = void> T UpgradeBuild() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AFD6C))(this);
	}
	template <typename T = void> T SelectFurniture(GameEntity* entity) {
		return ((T (*)(BuilderWindow*, GameEntity*))(Il2CppBase() + 0x15ACEFC))(this, entity);
	}
	template <typename T = void> T OnDestroySelectedFurniture(uintptr_t entity) {
		return ((T (*)(BuilderWindow*, uintptr_t))(Il2CppBase() + 0x15B03A0))(this, entity);
	}
	template <typename T = void> T MoveFurniture() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15B04B4))(this);
	}
	template <typename T = void> T CreateGhost(GameEntity* selectedFurniture, bool isPlaceClick) {
		return ((T (*)(BuilderWindow*, GameEntity*, bool))(Il2CppBase() + 0x15B04F8))(this, selectedFurniture, isPlaceClick);
	}
	template <typename T = void> T CreateGhost_1(GameDataEntity* buildEntity, Vec2* position, bool isPlaceClick) {
		return ((T (*)(BuilderWindow*, GameDataEntity*, Vec2*, bool))(Il2CppBase() + 0x15ADAA4))(this, buildEntity, position, isPlaceClick);
	}
	template <typename T = bool> T IsFurnitureNotEmpty(GameEntity* furniture) {
		return ((T (*)(BuilderWindow*, GameEntity*))(Il2CppBase() + 0x15B0748))(this, furniture);
	}
	template <typename T = void> T UpdateSelector(GameEntity* target) {
		return ((T (*)(BuilderWindow*, GameEntity*))(Il2CppBase() + 0x15AEEFC))(this, target);
	}
	template <typename T = void> T DestroySelector() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15AD474))(this);
	}
	template <typename T = void> T OnItemClick(BuilderEntityView* item) {
		return ((T (*)(BuilderWindow*, BuilderEntityView*))(Il2CppBase() + 0x15A8F9C))(this, item);
	}
	template <typename T = void> T SetSelectedVisible(GameEntity* entity, bool visible) {
		return ((T (*)(BuilderWindow*, GameEntity*, bool))(Il2CppBase() + 0x15AEAE4))(this, entity, visible);
	}
	template <typename T = void> T Awakeb__40_0() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15B098C))(this);
	}
	template <typename T = void> T Awakeb__40_1() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15B09F8))(this);
	}
	template <typename T = void> T Awakeb__40_2() {
		return ((T (*)(BuilderWindow*))(Il2CppBase() + 0x15B0A64))(this);
	}
	template <typename T = void> T Awakeb__40_3(bool isOn) {
		return ((T (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0A6C))(this, isOn);
	}
	template <typename T = void> T Awakeb__40_4(bool isOn) {
		return ((T (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0A80))(this, isOn);
	}
	template <typename T = void> T Awakeb__40_5(bool isOn) {
		return ((T (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0A94))(this, isOn);
	}
	template <typename T = void> T Awakeb__40_6(bool isOn) {
		return ((T (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0AA8))(this, isOn);
	}
	template <typename T = void> T Awakeb__40_7(bool isOn) {
		return ((T (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0ABC))(this, isOn);
	}
	template <typename T = void> T Awakeb__40_8(bool isOn) {
		return ((T (*)(BuilderWindow*, bool))(Il2CppBase() + 0x15B0ACC))(this, isOn);
	}
	template <typename T = void> T StartUpgradingb__68_0(uintptr_t e) {
		return ((T (*)(BuilderWindow*, uintptr_t))(Il2CppBase() + 0x15B0AE0))(this, e);
	}

};

