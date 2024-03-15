#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideHelper"));
	}

	template <typename R = Il2CppString*> static R& NONE_PREFAB() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& HD() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& NoSwitchShader() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = bool> R& NoSwitchColor() {
		return *(R*)((uintptr_t)this + 0x1A);
	}
	template <typename R = uintptr_t> R& DefaultColor() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& DefaultTransparency() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& TEXTURE_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& oneEighth() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename R = Il2CppArray<uintptr_t>*> static R& _uvs() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Il2CppList<uintptr_t>*& _meshesToCombine() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = uintptr_t> static R& _blendShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = uintptr_t> static R& _defaultShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = uintptr_t> static R& _hdShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = uintptr_t> static R& _maskShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = uintptr_t> static R& _zDepthShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = uintptr_t> static R& BaseColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = bool> static R& _inited() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = float> R& _transparentValue() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& Changed() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	 static Il2CppList<uintptr_t>*& _matCache() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = bool> R& _isMob() {
		return *(R*)((uintptr_t)this + 0x35);
	}
	template <typename R = uintptr_t> R& _defaultSocket() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Il2CppList<uintptr_t>*& _sockets() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x40);
	}
	 Il2CppDictionary<Il2CppString*, uintptr_t>*& Sockets() {
		return *(Il2CppDictionary<Il2CppString*, uintptr_t>**)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppArray<SlotPrefab*>*> R& _slotPrefabs() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Renderers() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Fxs() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _smRenderer() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _texture() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _textureNormal() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _textureMRC() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _textureRough() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _mesh() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = MinimapLabelView*> R& MinimapLabel() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& animator() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	 Nullable1bool>*& _hasAnimator() {
		return *(Nullable1bool>**)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& FemaleController() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& MaleController() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& FemaleAvatar() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& MaleAvatar() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _skinColor() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _hairColor() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = Il2CppArray<HideHelperListener*>*> R& _listeners() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _color() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = int32_t> R& _colorPriority() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = float> R& _maxTransparency() {
		return *(R*)((uintptr_t)this + 0x10C);
	}
	template <typename R = bool> R& _isInvisible() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = bool> R& _isFriend() {
		return *(R*)((uintptr_t)this + 0x111);
	}
	template <typename R = bool> R& _isSneak() {
		return *(R*)((uintptr_t)this + 0x112);
	}
	template <typename R = bool> R& _isPolymorph() {
		return *(R*)((uintptr_t)this + 0x113);
	}
	template <typename R = bool> R& _isRiding() {
		return *(R*)((uintptr_t)this + 0x114);
	}
	template <typename R = bool> R& _isMinimapAlwaysVisible() {
		return *(R*)((uintptr_t)this + 0x115);
	}
	template <typename R = bool> R& _isMinimapHide() {
		return *(R*)((uintptr_t)this + 0x116);
	}
	 Il2CppDictionary<uintptr_t, ValueTuple2int32_t, int32_t>*>*& _colors() {
		return *(Il2CppDictionary<uintptr_t, ValueTuple2int32_t, int32_t>*>**)((uintptr_t)this + 0x118);
	}
	 Il2CppDictionary<float, int32_t>*& _transparencies() {
		return *(Il2CppDictionary<float, int32_t>**)((uintptr_t)this + 0x120);
	}
	template <typename R = bool> R& _isDirty() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = Gender*> R& Gender() {
		return *(R*)((uintptr_t)this + 0x129);
	}
	template <typename R = ToolPrefab*> R& _weaponRenderer() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = ToolPrefab*> R& _secondWeaponRenderer() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = ToolPrefab*> R& _petRenderer() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = bool> R& _showClothes() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = ToolPrefab*> R& _clothesRenderer() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = ToolPrefab*> R& _bulletRenderer() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = ToolPrefab*> R& _toolRenderer() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = bool> R& _showTool() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = bool> R& _showBullet() {
		return *(R*)((uintptr_t)this + 0x1C9);
	}
	 Il2CppList<HideHelper*>*& _children() {
		return *(Il2CppList<HideHelper*>**)((uintptr_t)this + 0x1D0);
	}
	 Il2CppList<ValueTuple2Il2CppString*, uintptr_t>*>*& _effects() {
		return *(Il2CppList<ValueTuple2Il2CppString*, uintptr_t>*>**)((uintptr_t)this + 0x1D8);
	}
	 HashSet1Il2CppString*>*& _toolFxs() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x1E0);
	}
	template <typename R = bool> R& hasSmRenderer() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = bool> R& _active() {
		return *(R*)((uintptr_t)this + 0x1E9);
	}

	template <typename R = uintptr_t> static R UV_Rect(int32_t x, int32_t y, int32_t width, int32_t height) {
		return ((R (*)(void *, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1C3C2A0))(0, x, y, width, height);
	}
	template <typename R = void> static R Init() {
		return ((R (*)(void *))(Il2CppBase() + 0x1C3C384))(0);
	}
	template <typename R = void> static R ChangeQuality(int32_t quality) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1C3C530))(0, quality);
	}
	template <typename R = bool> R get_Changed() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C3C844))(this);
	}
	template <typename R = void> R set_Changed(bool value) {
		return ((R (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3C84C))(this, value);
	}
	template <typename R = void> R Execute(GameEntity* entity, float deltaTime) {
		return ((R (*)(HideHelper*, GameEntity*, float))(Il2CppBase() + 0x1C3C858))(this, entity, deltaTime);
	}
	template <typename R = bool> R get_ShowFxs() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C3E22C))(this);
	}
	template <typename R = bool> R NeedMinimapLabelActive() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C3E1E4))(this);
	}
	template <typename R = void> R SetupToolMaterials(ToolView* view, bool switchShader, bool active) {
		return ((R (*)(HideHelper*, ToolView*, bool, bool))(Il2CppBase() + 0x1C3DEA4))(this, view, switchShader, active);
	}
	template <typename R = void> R SetupMaterials(uintptr_t renderer, bool switchShader, bool active) {
		return ((R (*)(HideHelper*, uintptr_t, bool, bool))(Il2CppBase() + 0x1C3D7D8))(this, renderer, switchShader, active);
	}
	template <typename R = void> R SetOnlyOneMaterial() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C3E264))(this);
	}
	template <typename R = uintptr_t> R get_DefaultSocket() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C3E39C))(this);
	}
	template <typename R = bool> R get_HasAnimator() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C3E428))(this);
	}
	template <typename R = void> R InitFromSource(HideHelper* source) {
		return ((R (*)(HideHelper*, HideHelper*))(Il2CppBase() + 0x1C3E578))(this, source);
	}
	template <typename R = void> R Death(GameEntity* entity) {
		return ((R (*)(HideHelper*, GameEntity*))(Il2CppBase() + 0x1C3F250))(this, entity);
	}
	template <typename R = void> R SetPolymorph(bool polymorph) {
		return ((R (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3F470))(this, polymorph);
	}
	template <typename R = void> R SetRiding(bool riding) {
		return ((R (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3F498))(this, riding);
	}
	template <typename R = void> R SetSneak(bool isSneak) {
		return ((R (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3F4C0))(this, isSneak);
	}
	template <typename R = void> R SetVisible(bool isInvisible, bool isFriend) {
		return ((R (*)(HideHelper*, bool, bool))(Il2CppBase() + 0x1C3F650))(this, isInvisible, isFriend);
	}
	template <typename R = void> R SetMinimapAlwaysVisible(bool isMinimapAlwaysVisible) {
		return ((R (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3F814))(this, isMinimapAlwaysVisible);
	}
	template <typename R = void> R SetMinimapHide(bool isMinimapHide) {
		return ((R (*)(HideHelper*, bool))(Il2CppBase() + 0x1C3F83C))(this, isMinimapHide);
	}
	 ValueTuple2uintptr_t, int32_t>* GetColorByPriority() {
		return ((ValueTuple2uintptr_t, int32_t>* (*)(HideHelper*))(Il2CppBase() + 0x1C3F864))(this);
	}
	template <typename R = void> R SetColor(uintptr_t color, int32_t priority) {
		return ((R (*)(HideHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x1C3FA64))(this, color, priority);
	}
	template <typename R = void> R SetTransparency(float value) {
		return ((R (*)(HideHelper*, float))(Il2CppBase() + 0x1C3FCE0))(this, value);
	}
	template <typename R = void> R ResetColor(uintptr_t color) {
		return ((R (*)(HideHelper*, uintptr_t))(Il2CppBase() + 0x1C3FECC))(this, color);
	}
	template <typename R = void> R ResetTransparency(float value) {
		return ((R (*)(HideHelper*, float))(Il2CppBase() + 0x1C40184))(this, value);
	}
	template <typename R = Gender*> R get_Gender() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C404F0))(this);
	}
	template <typename R = void> R set_Gender(Gender* value) {
		return ((R (*)(HideHelper*, Gender*))(Il2CppBase() + 0x1C404F8))(this, value);
	}
	template <typename R = void> R SetupGender(Gender* gender, bool hd) {
		return ((R (*)(HideHelper*, Gender*, bool))(Il2CppBase() + 0x1C40500))(this, gender, hd);
	}
	template <typename R = void> R SetupView(SlotIndex* slotIndex, ItemEntity* item, bool hd) {
		return ((R (*)(HideHelper*, SlotIndex*, ItemEntity*, bool))(Il2CppBase() + 0x1C40C94))(this, slotIndex, item, hd);
	}
	template <typename R = void> R HideTool() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C41254))(this);
	}
	template <typename R = void> R DestroyTool() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C41380))(this);
	}
	template <typename R = void> R SetWeaponActive() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C412C8))(this);
	}
	template <typename R = void> R HideBullet() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C4146C))(this);
	}
	template <typename R = void> R ShowBullet() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C412AC))(this);
	}
	template <typename R = void> R SetMinimapIcon(Il2CppString* iconName, bool directed) {
		return ((R (*)(HideHelper*, Il2CppString*, bool))(Il2CppBase() + 0x1C41484))(this, iconName, directed);
	}
	template <typename R = void> R HideWeaponAndTool() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C418C0))(this);
	}
	template <typename R = ToolPrefab*> R CreateItem(ItemEntity* item, bool tool) {
		return ((R (*)(HideHelper*, ItemEntity*, bool))(Il2CppBase() + 0x1C41988))(this, item, tool);
	}
	template <typename R = ToolPrefab*> R CreateItem_1(ItemEntity* item, Il2CppString* prefabName, ProtoModels::WorldResourcesType* resourcesType, Il2CppString* socketName, bool dontCheckHD) {
		return ((R (*)(HideHelper*, ItemEntity*, Il2CppString*, ProtoModels::WorldResourcesType*, Il2CppString*, bool))(Il2CppBase() + 0x1C41ADC))(this, item, prefabName, resourcesType, socketName, dontCheckHD);
	}
	template <typename R = void> R SetupToolView(ItemEntity* item) {
		return ((R (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C41F74))(this, item);
	}
	template <typename R = void> R SetupClothesView(ItemEntity* item) {
		return ((R (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C40BE4))(this, item);
	}
	template <typename R = void> R SetupPetView(ItemEntity* item) {
		return ((R (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C4203C))(this, item);
	}
	template <typename R = void> R UpdateArmed(GameEntity* entity) {
		return ((R (*)(HideHelper*, GameEntity*))(Il2CppBase() + 0x1C3DFFC))(this, entity);
	}
	template <typename R = void> R SetupWeaponView(ItemEntity* item) {
		return ((R (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C42204))(this, item);
	}
	template <typename R = bool> R HasToolFx(Il2CppString* name) {
		return ((R (*)(HideHelper*, Il2CppString*))(Il2CppBase() + 0x1C42538))(this, name);
	}
	template <typename R = void> R SetToolFx(Il2CppString* name, bool active) {
		return ((R (*)(HideHelper*, Il2CppString*, bool))(Il2CppBase() + 0x1C425C0))(this, name, active);
	}
	template <typename R = void> R AddChild(HideHelper* child) {
		return ((R (*)(HideHelper*, HideHelper*))(Il2CppBase() + 0x1C3F028))(this, child);
	}
	template <typename R = void> R AttachEffect(uintptr_t effectGO, Il2CppString* socketName) {
		return ((R (*)(HideHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1C3EE6C))(this, effectGO, socketName);
	}
	template <typename R = void> R RemoveEffect(uintptr_t effectGO) {
		return ((R (*)(HideHelper*, uintptr_t))(Il2CppBase() + 0x1C42798))(this, effectGO);
	}
	template <typename R = void> R RemoveChild(HideHelper* child) {
		return ((R (*)(HideHelper*, HideHelper*))(Il2CppBase() + 0x1C428B8))(this, child);
	}
	template <typename R = void> R CombineTextures(GameEntity* entity, Il2CppString* textureName, uintptr_t targetTexture) {
		return ((R (*)(HideHelper*, GameEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C429D4))(this, entity, textureName, targetTexture);
	}
	template <typename R = void> R ApplySetupView(GameEntity* entity) {
		return ((R (*)(HideHelper*, GameEntity*))(Il2CppBase() + 0x1C3D018))(this, entity);
	}
	template <typename R = void> R SetupHairColor(ItemEntity* colorEntity) {
		return ((R (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C42E40))(this, colorEntity);
	}
	template <typename R = void> R SetupSkinColor(ItemEntity* colorEntity) {
		return ((R (*)(HideHelper*, ItemEntity*))(Il2CppBase() + 0x1C42F40))(this, colorEntity);
	}
	template <typename R = void> R SetupColor(Il2CppString* paramName, uintptr_t color) {
		return ((R (*)(HideHelper*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C3ECB8))(this, paramName, color);
	}
	template <typename R = uintptr_t> R GetSocket(Il2CppString* socketName) {
		return ((R (*)(HideHelper*, Il2CppString*))(Il2CppBase() + 0x1C41DF8))(this, socketName);
	}
	template <typename R = void> R InitSockets() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C43040))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C43248))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C4340C))(this);
	}
	template <typename R = void> R SetActive(bool active) {
		return ((R (*)(HideHelper*, bool))(Il2CppBase() + 0x1C43418))(this, active);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(HideHelper*))(Il2CppBase() + 0x1C435A8))(this);
	}

};

