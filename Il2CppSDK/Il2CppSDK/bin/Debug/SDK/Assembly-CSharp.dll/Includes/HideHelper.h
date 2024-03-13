#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideHelper"));
	}

	template <typename T = Il2CppString*> static T& NONE_PREFAB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& HD() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& NoSwitchShader() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& NoSwitchColor() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = uintptr_t> T& DefaultColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& DefaultTransparency() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& TEXTURE_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& oneEighth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _uvs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& _meshesToCombine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _blendShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _defaultShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& _hdShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& _maskShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _zDepthShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& BaseColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = bool> static T& _inited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = float> T& _transparentValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& Changed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& _matCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = bool> T& _isMob() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uintptr_t> T& _defaultSocket() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _sockets() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& Sockets() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _slotPrefabs() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Renderers() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Fxs() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _smRenderer() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _texture() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _textureNormal() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _textureMRC() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _textureRough() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _mesh() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = MinimapLabelView*> T& MinimapLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Nullable1bool>*> T& _hasAnimator() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& FemaleController() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& MaleController() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& FemaleAvatar() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& MaleAvatar() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _skinColor() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _hairColor() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _listeners() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _color() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& _colorPriority() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& _maxTransparency() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& _isInvisible() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& _isFriend() {
		return *(T*)((uintptr_t)this + 0x111);
	}
	template <typename T = bool> T& _isSneak() {
		return *(T*)((uintptr_t)this + 0x112);
	}
	template <typename T = bool> T& _isPolymorph() {
		return *(T*)((uintptr_t)this + 0x113);
	}
	template <typename T = bool> T& _isRiding() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& _isMinimapAlwaysVisible() {
		return *(T*)((uintptr_t)this + 0x115);
	}
	template <typename T = bool> T& _isMinimapHide() {
		return *(T*)((uintptr_t)this + 0x116);
	}
	template <typename T = Il2CppDictionary<uintptr_t, ValueTuple2int32_t, int32_t>*>*> T& _colors() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppDictionary<float, int32_t>*> T& _transparencies() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& _isDirty() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Gender*> T& Gender() {
		return *(T*)((uintptr_t)this + 0x129);
	}
	template <typename T = ToolPrefab*> T& _weaponRenderer() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = ToolPrefab*> T& _secondWeaponRenderer() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = ToolPrefab*> T& _petRenderer() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& _showClothes() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = ToolPrefab*> T& _clothesRenderer() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = ToolPrefab*> T& _bulletRenderer() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = ToolPrefab*> T& _toolRenderer() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& _showTool() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = bool> T& _showBullet() {
		return *(T*)((uintptr_t)this + 0x1C9);
	}
	template <typename T = Il2CppList<HideHelper*>*> T& _children() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = Il2CppList<ValueTuple2Il2CppString*, uintptr_t>*>*> T& _effects() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _toolFxs() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& hasSmRenderer() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0x1E9);
	}

	template <typename T = uintptr_t> static T UV_Rect(int32_t x, int32_t y, int32_t width, int32_t height) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1C3C2A0))(0, x, y, width, height);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3C384))(0);
	}
	template <typename T = void> static T ChangeQuality(int32_t quality) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1C3C530))(0, quality);
	}
	template <typename T = bool> T get_Changed() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C3C844))(this);
	}
	template <typename T = void> T set_Changed(bool value) {
		return ((T (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3C84C))(this, value);
	}
	template <typename T = void> T Execute(GameEntity* entity, float deltaTime) {
		return ((T (*)(HideHelper*, GameEntity*, float))(Il2CppBase() + 0x1C3C858))(this, entity, deltaTime);
	}
	template <typename T = bool> T get_ShowFxs() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C3E22C))(this);
	}
	template <typename T = bool> T NeedMinimapLabelActive() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C3E1E4))(this);
	}
	template <typename T = void> T SetupToolMaterials(ToolView* view, bool switchShader, bool active) {
		return ((T (*)(HideHelper*, ToolView*, bool, bool))(Il2CppBase() + 0x1C3DEA4))(this, view, switchShader, active);
	}
	template <typename T = void> T SetupMaterials(uintptr_t renderer, bool switchShader, bool active) {
		return ((T (*)(HideHelper*, uintptr_t, bool, bool))(Il2CppBase() + 0x1C3D7D8))(this, renderer, switchShader, active);
	}
	template <typename T = void> T SetOnlyOneMaterial() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C3E264))(this);
	}
	template <typename T = uintptr_t> T get_DefaultSocket() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C3E39C))(this);
	}
	template <typename T = bool> T get_HasAnimator() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C3E428))(this);
	}
	template <typename T = void> T InitFromSource(HideHelper* source) {
		return ((T (*)(HideHelper*, HideHelper*))(Il2CppBase() + 0x1C3E578))(this, source);
	}
	template <typename T = void> T Death(GameEntity* entity) {
		return ((T (*)(HideHelper*, GameEntity*))(Il2CppBase() + 0x1C3F250))(this, entity);
	}
	template <typename T = void> T SetPolymorph(bool polymorph) {
		return ((T (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3F470))(this, polymorph);
	}
	template <typename T = void> T SetRiding(bool riding) {
		return ((T (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3F498))(this, riding);
	}
	template <typename T = void> T SetSneak(bool isSneak) {
		return ((T (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3F4C0))(this, isSneak);
	}
	template <typename T = void> T SetVisible(bool isInvisible, bool isFriend) {
		return ((T (*)(HideHelper*, bool, bool))(Il2CppBase() + 0x1C3F650))(this, isInvisible, isFriend);
	}
	template <typename T = void> T SetMinimapAlwaysVisible(bool isMinimapAlwaysVisible) {
		return ((T (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3F814))(this, isMinimapAlwaysVisible);
	}
	template <typename T = void> T SetMinimapHide(bool isMinimapHide) {
		return ((T (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3F83C))(this, isMinimapHide);
	}
	template <typename T = ValueTuple2uintptr_t, int32_t>*> T GetColorByPriority() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C3F864))(this);
	}
	template <typename T = void> T SetColor(uintptr_t color, int32_t priority) {
		return ((T (*)(HideHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x1C3FA64))(this, color, priority);
	}
	template <typename T = void> T SetTransparency(float value) {
		return ((T (*)(HideHelper*, float))(Il2CppBase() + 0x1C3FCE0))(this, value);
	}
	template <typename T = void> T ResetColor(uintptr_t color) {
		return ((T (*)(HideHelper*, uintptr_t))(Il2CppBase() + 0x1C3FECC))(this, color);
	}
	template <typename T = void> T ResetTransparency(float value) {
		return ((T (*)(HideHelper*, float))(Il2CppBase() + 0x1C40184))(this, value);
	}
	template <typename T = Gender*> T get_Gender() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C404F0))(this);
	}
	template <typename T = void> T set_Gender(Gender* value) {
		return ((T (*)(HideHelper*, Gender*))(Il2CppBase() + 0x1C404F8))(this, value);
	}
	template <typename T = void> T SetupGender(Gender* gender, bool hd) {
		return ((T (*)(HideHelper*, Gender*, bool))(Il2CppBase() + 0x1C40500))(this, gender, hd);
	}
	template <typename T = void> T SetupView(SlotIndex* slotIndex, ItemEntity* item, bool hd) {
		return ((T (*)(HideHelper*, SlotIndex*, ItemEntity*, bool))(Il2CppBase() + 0x1C40C94))(this, slotIndex, item, hd);
	}
	template <typename T = void> T HideTool() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C41254))(this);
	}
	template <typename T = void> T DestroyTool() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C41380))(this);
	}
	template <typename T = void> T SetWeaponActive() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C412C8))(this);
	}
	template <typename T = void> T HideBullet() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C4146C))(this);
	}
	template <typename T = void> T ShowBullet() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C412AC))(this);
	}
	template <typename T = void> T SetMinimapIcon(Il2CppString* iconName, bool directed) {
		return ((T (*)(HideHelper*, Il2CppString*, bool))(Il2CppBase() + 0x1C41484))(this, iconName, directed);
	}
	template <typename T = void> T HideWeaponAndTool() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C418C0))(this);
	}
	template <typename T = ToolPrefab*> T CreateItem(ItemEntity* item, bool tool) {
		return ((T (*)(HideHelper*, ItemEntity*, bool))(Il2CppBase() + 0x1C41988))(this, item, tool);
	}
	template <typename T = ToolPrefab*> T CreateItem_1(ItemEntity* item, Il2CppString* prefabName, WorldResourcesType* resourcesType, Il2CppString* socketName, bool dontCheckHD) {
		return ((T (*)(HideHelper*, ItemEntity*, Il2CppString*, WorldResourcesType*, Il2CppString*, bool))(Il2CppBase() + 0x1C41ADC))(this, item, prefabName, resourcesType, socketName, dontCheckHD);
	}
	template <typename T = void> T SetupToolView(ItemEntity* item) {
		return ((T (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C41F74))(this, item);
	}
	template <typename T = void> T SetupClothesView(ItemEntity* item) {
		return ((T (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C40BE4))(this, item);
	}
	template <typename T = void> T SetupPetView(ItemEntity* item) {
		return ((T (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C4203C))(this, item);
	}
	template <typename T = void> T UpdateArmed(GameEntity* entity) {
		return ((T (*)(HideHelper*, GameEntity*))(Il2CppBase() + 0x1C3DFFC))(this, entity);
	}
	template <typename T = void> T SetupWeaponView(ItemEntity* item) {
		return ((T (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C42204))(this, item);
	}
	template <typename T = bool> T HasToolFx(Il2CppString* name) {
		return ((T (*)(HideHelper*, Il2CppString*))(Il2CppBase() + 0x1C42538))(this, name);
	}
	template <typename T = void> T SetToolFx(Il2CppString* name, bool active) {
		return ((T (*)(HideHelper*, Il2CppString*, bool))(Il2CppBase() + 0x1C425C0))(this, name, active);
	}
	template <typename T = void> T AddChild(HideHelper* child) {
		return ((T (*)(HideHelper*, HideHelper*))(Il2CppBase() + 0x1C3F028))(this, child);
	}
	template <typename T = void> T AttachEffect(uintptr_t effectGO, Il2CppString* socketName) {
		return ((T (*)(HideHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1C3EE6C))(this, effectGO, socketName);
	}
	template <typename T = void> T RemoveEffect(uintptr_t effectGO) {
		return ((T (*)(HideHelper*, uintptr_t))(Il2CppBase() + 0x1C42798))(this, effectGO);
	}
	template <typename T = void> T RemoveChild(HideHelper* child) {
		return ((T (*)(HideHelper*, HideHelper*))(Il2CppBase() + 0x1C428B8))(this, child);
	}
	template <typename T = void> T CombineTextures(GameEntity* entity, Il2CppString* textureName, uintptr_t targetTexture) {
		return ((T (*)(HideHelper*, GameEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C429D4))(this, entity, textureName, targetTexture);
	}
	template <typename T = void> T ApplySetupView(GameEntity* entity) {
		return ((T (*)(HideHelper*, GameEntity*))(Il2CppBase() + 0x1C3D018))(this, entity);
	}
	template <typename T = void> T SetupHairColor(ItemEntity* colorEntity) {
		return ((T (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C42E40))(this, colorEntity);
	}
	template <typename T = void> T SetupSkinColor(ItemEntity* colorEntity) {
		return ((T (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C42F40))(this, colorEntity);
	}
	template <typename T = void> T SetupColor(Il2CppString* paramName, uintptr_t color) {
		return ((T (*)(HideHelper*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C3ECB8))(this, paramName, color);
	}
	template <typename T = uintptr_t> T GetSocket(Il2CppString* socketName) {
		return ((T (*)(HideHelper*, Il2CppString*))(Il2CppBase() + 0x1C41DF8))(this, socketName);
	}
	template <typename T = void> T InitSockets() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C43040))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C43248))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C4340C))(this);
	}
	template <typename T = void> T SetActive(bool active) {
		return ((T (*)(HideHelper*, bool))(Il2CppBase() + 0x1C43418))(this, active);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HideHelper*))(Il2CppBase() + 0x1C435A8))(this);
	}

};

