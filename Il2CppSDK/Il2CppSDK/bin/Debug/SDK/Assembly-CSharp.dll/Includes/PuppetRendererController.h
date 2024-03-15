#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PuppetRendererController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PuppetRendererController"));
	}

	template <typename R = uintptr_t> R& _image() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _eventTrigger() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _rotationSensitivity() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = PuppetCameraController*> R& PuppetCamera() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _puppetView() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _puppetAnimator() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Il2CppDictionary<Il2CppString*, uintptr_t>*& _entitiesViews() {
		return *(Il2CppDictionary<Il2CppString*, uintptr_t>**)((uintptr_t)this + 0x48);
	}
	template <typename R = GameEntity*> R& PuppetEntity() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = GameEntity*> R& PuppetCameraEntity() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& CurrentView() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> static R& _puppetLayer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& _shift() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = PuppetCameraController*> R get_PuppetCamera() {
		return ((R (*)(PuppetRendererController*))(Il2CppBase() + 0x11B28AC))(this);
	}
	template <typename R = void> R set_PuppetCamera(PuppetCameraController* value) {
		return ((R (*)(PuppetRendererController*, PuppetCameraController*))(Il2CppBase() + 0x11B28B4))(this, value);
	}
	template <typename R = GameEntity*> R get_PuppetEntity() {
		return ((R (*)(PuppetRendererController*))(Il2CppBase() + 0x11B28BC))(this);
	}
	template <typename R = void> R set_PuppetEntity(GameEntity* value) {
		return ((R (*)(PuppetRendererController*, GameEntity*))(Il2CppBase() + 0x11B28C4))(this, value);
	}
	template <typename R = GameEntity*> R get_PuppetCameraEntity() {
		return ((R (*)(PuppetRendererController*))(Il2CppBase() + 0x11B28CC))(this);
	}
	template <typename R = void> R set_PuppetCameraEntity(GameEntity* value) {
		return ((R (*)(PuppetRendererController*, GameEntity*))(Il2CppBase() + 0x11B28D4))(this, value);
	}
	template <typename R = uintptr_t> R get_CurrentView() {
		return ((R (*)(PuppetRendererController*))(Il2CppBase() + 0x11B28DC))(this);
	}
	template <typename R = void> R set_CurrentView(uintptr_t value) {
		return ((R (*)(PuppetRendererController*, uintptr_t))(Il2CppBase() + 0x11B28E4))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PuppetRendererController*))(Il2CppBase() + 0x11B28EC))(this);
	}
	template <typename R = void> R SetVisible(bool visible) {
		return ((R (*)(PuppetRendererController*, bool))(Il2CppBase() + 0x11B2AB0))(this, visible);
	}
	template <typename R = void> R Init(Il2CppString* uniqueLookup, int32_t shift) {
		return ((R (*)(PuppetRendererController*, Il2CppString*, int32_t))(Il2CppBase() + 0x11B2B54))(this, uniqueLookup, shift);
	}
	template <typename R = void> R ShowPuppetCamera(Il2CppString* cameraName, bool enableImage) {
		return ((R (*)(PuppetRendererController*, Il2CppString*, bool))(Il2CppBase() + 0x11B2E98))(this, cameraName, enableImage);
	}
	template <typename R = void> R HidePuppetCamera(Il2CppString* cameraName, bool hideImage) {
		return ((R (*)(PuppetRendererController*, Il2CppString*, bool))(Il2CppBase() + 0x11B33F0))(this, cameraName, hideImage);
	}
	template <typename R = bool> R IsPuppetCameraActive(Il2CppString* cameraName) {
		return ((R (*)(PuppetRendererController*, Il2CppString*))(Il2CppBase() + 0x11B3598))(this, cameraName);
	}
	template <typename R = void> R ShowPuppetPlayer(GameEntity* player, Il2CppString* lookup) {
		return ((R (*)(PuppetRendererController*, GameEntity*, Il2CppString*))(Il2CppBase() + 0x11B36D8))(this, player, lookup);
	}
	template <typename R = void> R ShowCurrentPuppet() {
		return ((R (*)(PuppetRendererController*))(Il2CppBase() + 0x11B3FF4))(this);
	}
	template <typename R = void> R ShowPuppetMount(GameEntity* player, ItemEntity* mount) {
		return ((R (*)(PuppetRendererController*, GameEntity*, ItemEntity*))(Il2CppBase() + 0x11B41F4))(this, player, mount);
	}
	template <typename R = void> R ShowPuppetPet(GameEntity* player, ItemEntity* pet) {
		return ((R (*)(PuppetRendererController*, GameEntity*, ItemEntity*))(Il2CppBase() + 0x11B4A78))(this, player, pet);
	}
	template <typename R = void> R ShowPuppetTrophy(GameEntity* target, ItemEntity* trophyItem) {
		return ((R (*)(PuppetRendererController*, GameEntity*, ItemEntity*))(Il2CppBase() + 0x11B527C))(this, target, trophyItem);
	}
	template <typename R = void> R HideView() {
		return ((R (*)(PuppetRendererController*))(Il2CppBase() + 0x11B5A84))(this);
	}
	template <typename R = void> R SetupWeapon(Il2CppString* weaponName) {
		return ((R (*)(PuppetRendererController*, Il2CppString*))(Il2CppBase() + 0x11B5C68))(this, weaponName);
	}
	template <typename R = void> R ShowEntity(Il2CppString* blueprint) {
		return ((R (*)(PuppetRendererController*, Il2CppString*))(Il2CppBase() + 0x11B5E2C))(this, blueprint);
	}
	template <typename R = void> R ShowPreviewPrefab(ItemEntity* item) {
		return ((R (*)(PuppetRendererController*, ItemEntity*))(Il2CppBase() + 0x11B627C))(this, item);
	}
	template <typename R = void> R ShowView(Il2CppString* prefabName, ProtoModels::WorldResourcesType* resourceType, Nullable1float>* angle) {
		return ((R (*)(PuppetRendererController*, Il2CppString*, ProtoModels::WorldResourcesType*, Nullable1float>*))(Il2CppBase() + 0x11B5F88))(this, prefabName, resourceType, angle);
	}
	template <typename R = void> R PlayEmoji(Il2CppString* emojiName, bool loop) {
		return ((R (*)(PuppetRendererController*, Il2CppString*, bool))(Il2CppBase() + 0x11B654C))(this, emojiName, loop);
	}
	template <typename R = uintptr_t> R RepeatEmojiAction(Il2CppString* emojiName, float duration) {
		return ((R (*)(PuppetRendererController*, Il2CppString*, float))(Il2CppBase() + 0x11B6A94))(this, emojiName, duration);
	}
	template <typename R = void> R StopEmoji() {
		return ((R (*)(PuppetRendererController*))(Il2CppBase() + 0x11B6900))(this);
	}
	template <typename R = uintptr_t> R TryCreateView(Il2CppString* prefabName, ProtoModels::WorldResourcesType* resourceType) {
		return ((R (*)(PuppetRendererController*, Il2CppString*, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x11B62E8))(this, prefabName, resourceType);
	}
	template <typename R = void> R ResetLook() {
		return ((R (*)(PuppetRendererController*))(Il2CppBase() + 0x11B6B38))(this);
	}
	template <typename R = void> R OnCharacterDrag(uintptr_t eventData) {
		return ((R (*)(PuppetRendererController*, uintptr_t))(Il2CppBase() + 0x11B6D14))(this, eventData);
	}
	template <typename R = void> R OnCharacterEndDrag(uintptr_t eventData) {
		return ((R (*)(PuppetRendererController*, uintptr_t))(Il2CppBase() + 0x11B6E10))(this, eventData);
	}
	template <typename R = void> R Clear(bool deletePuppetEntity) {
		return ((R (*)(PuppetRendererController*, bool))(Il2CppBase() + 0x11B6EA0))(this, deletePuppetEntity);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(PuppetRendererController*))(Il2CppBase() + 0x11B7244))(this);
	}
	template <typename R = void> static R ChageRenderByClass(GameEntity* puppetEntity, Il2CppString* className) {
		return ((R (*)(void *, GameEntity*, Il2CppString*))(Il2CppBase() + 0x11B1D98))(0, puppetEntity, className);
	}

};

