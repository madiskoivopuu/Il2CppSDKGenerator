#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PuppetRendererController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PuppetRendererController"));
	}

	template <typename T = uintptr_t> T& _image() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _eventTrigger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _rotationSensitivity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PuppetCamera() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _puppetView() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _puppetAnimator() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _entitiesViews() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& PuppetEntity() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& PuppetCameraEntity() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& CurrentView() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> static T& _puppetLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& _shift() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_PuppetCamera() {
		return ((T (*)(PuppetRendererController*))(Il2CppBase() + 0x11B28AC))(this);
	}
	template <typename T = void> T set_PuppetCamera(uintptr_t value) {
		return ((T (*)(PuppetRendererController*, uintptr_t))(Il2CppBase() + 0x11B28B4))(this, value);
	}
	template <typename T = uintptr_t> T get_PuppetEntity() {
		return ((T (*)(PuppetRendererController*))(Il2CppBase() + 0x11B28BC))(this);
	}
	template <typename T = void> T set_PuppetEntity(uintptr_t value) {
		return ((T (*)(PuppetRendererController*, uintptr_t))(Il2CppBase() + 0x11B28C4))(this, value);
	}
	template <typename T = uintptr_t> T get_PuppetCameraEntity() {
		return ((T (*)(PuppetRendererController*))(Il2CppBase() + 0x11B28CC))(this);
	}
	template <typename T = void> T set_PuppetCameraEntity(uintptr_t value) {
		return ((T (*)(PuppetRendererController*, uintptr_t))(Il2CppBase() + 0x11B28D4))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrentView() {
		return ((T (*)(PuppetRendererController*))(Il2CppBase() + 0x11B28DC))(this);
	}
	template <typename T = void> T set_CurrentView(uintptr_t value) {
		return ((T (*)(PuppetRendererController*, uintptr_t))(Il2CppBase() + 0x11B28E4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PuppetRendererController*))(Il2CppBase() + 0x11B28EC))(this);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(PuppetRendererController*, bool))(Il2CppBase() + 0x11B2AB0))(this, visible);
	}
	template <typename T = void> T Init(Il2CppString* uniqueLookup, int32_t shift) {
		return ((T (*)(PuppetRendererController*, Il2CppString*, int32_t))(Il2CppBase() + 0x11B2B54))(this, uniqueLookup, shift);
	}
	template <typename T = void> T ShowPuppetCamera(Il2CppString* cameraName, bool enableImage) {
		return ((T (*)(PuppetRendererController*, Il2CppString*, bool))(Il2CppBase() + 0x11B2E98))(this, cameraName, enableImage);
	}
	template <typename T = void> T HidePuppetCamera(Il2CppString* cameraName, bool hideImage) {
		return ((T (*)(PuppetRendererController*, Il2CppString*, bool))(Il2CppBase() + 0x11B33F0))(this, cameraName, hideImage);
	}
	template <typename T = bool> T IsPuppetCameraActive(Il2CppString* cameraName) {
		return ((T (*)(PuppetRendererController*, Il2CppString*))(Il2CppBase() + 0x11B3598))(this, cameraName);
	}
	template <typename T = void> T ShowPuppetPlayer(uintptr_t player, Il2CppString* lookup) {
		return ((T (*)(PuppetRendererController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x11B36D8))(this, player, lookup);
	}
	template <typename T = void> T ShowCurrentPuppet() {
		return ((T (*)(PuppetRendererController*))(Il2CppBase() + 0x11B3FF4))(this);
	}
	template <typename T = void> T ShowPuppetMount(uintptr_t player, uintptr_t mount) {
		return ((T (*)(PuppetRendererController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11B41F4))(this, player, mount);
	}
	template <typename T = void> T ShowPuppetPet(uintptr_t player, uintptr_t pet) {
		return ((T (*)(PuppetRendererController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11B4A78))(this, player, pet);
	}
	template <typename T = void> T ShowPuppetTrophy(uintptr_t target, uintptr_t trophyItem) {
		return ((T (*)(PuppetRendererController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11B527C))(this, target, trophyItem);
	}
	template <typename T = void> T HideView() {
		return ((T (*)(PuppetRendererController*))(Il2CppBase() + 0x11B5A84))(this);
	}
	template <typename T = void> T SetupWeapon(Il2CppString* weaponName) {
		return ((T (*)(PuppetRendererController*, Il2CppString*))(Il2CppBase() + 0x11B5C68))(this, weaponName);
	}
	template <typename T = void> T ShowEntity(Il2CppString* blueprint) {
		return ((T (*)(PuppetRendererController*, Il2CppString*))(Il2CppBase() + 0x11B5E2C))(this, blueprint);
	}
	template <typename T = void> T ShowPreviewPrefab(uintptr_t item) {
		return ((T (*)(PuppetRendererController*, uintptr_t))(Il2CppBase() + 0x11B627C))(this, item);
	}
	template <typename T = void> T ShowView(Il2CppString* prefabName, uintptr_t resourceType, void* angle) {
		return ((T (*)(PuppetRendererController*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x11B5F88))(this, prefabName, resourceType, angle);
	}
	template <typename T = void> T PlayEmoji(Il2CppString* emojiName, bool loop) {
		return ((T (*)(PuppetRendererController*, Il2CppString*, bool))(Il2CppBase() + 0x11B654C))(this, emojiName, loop);
	}
	template <typename T = uintptr_t> T RepeatEmojiAction(Il2CppString* emojiName, float duration) {
		return ((T (*)(PuppetRendererController*, Il2CppString*, float))(Il2CppBase() + 0x11B6A94))(this, emojiName, duration);
	}
	template <typename T = void> T StopEmoji() {
		return ((T (*)(PuppetRendererController*))(Il2CppBase() + 0x11B6900))(this);
	}
	template <typename T = uintptr_t> T TryCreateView(Il2CppString* prefabName, uintptr_t resourceType) {
		return ((T (*)(PuppetRendererController*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x11B62E8))(this, prefabName, resourceType);
	}
	template <typename T = void> T ResetLook() {
		return ((T (*)(PuppetRendererController*))(Il2CppBase() + 0x11B6B38))(this);
	}
	template <typename T = void> T OnCharacterDrag(uintptr_t eventData) {
		return ((T (*)(PuppetRendererController*, uintptr_t))(Il2CppBase() + 0x11B6D14))(this, eventData);
	}
	template <typename T = void> T OnCharacterEndDrag(uintptr_t eventData) {
		return ((T (*)(PuppetRendererController*, uintptr_t))(Il2CppBase() + 0x11B6E10))(this, eventData);
	}
	template <typename T = void> T Clear(bool deletePuppetEntity) {
		return ((T (*)(PuppetRendererController*, bool))(Il2CppBase() + 0x11B6EA0))(this, deletePuppetEntity);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PuppetRendererController*))(Il2CppBase() + 0x11B7244))(this);
	}
	template <typename T = void> static T ChageRenderByClass(uintptr_t puppetEntity, Il2CppString* className) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x11B1D98))(0, puppetEntity, className);
	}

};

}
