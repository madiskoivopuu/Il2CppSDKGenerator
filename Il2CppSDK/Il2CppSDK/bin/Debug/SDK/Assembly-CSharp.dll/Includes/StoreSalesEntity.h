#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSalesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSalesEntity"));
	}

	template <typename T = uintptr_t> static T& readComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_availabilityEnd() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x183FAEC))(this);
	}
	template <typename T = bool> T get_hasAvailabilityEnd() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x183FB74))(this);
	}
	template <typename T = void> T AddAvailabilityEnd(int64_t newValue) {
		return ((T (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x183FB80))(this, newValue);
	}
	template <typename T = void> T ReplaceAvailabilityEnd(int64_t newValue) {
		return ((T (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x183FC84))(this, newValue);
	}
	template <typename T = void> T RemoveAvailabilityEnd() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x183FD88))(this);
	}
	template <typename T = uintptr_t> T get_availabilityStart() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x183FD94))(this);
	}
	template <typename T = bool> T get_hasAvailabilityStart() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x183FE1C))(this);
	}
	template <typename T = void> T AddAvailabilityStart(int64_t newValue) {
		return ((T (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x183FE28))(this, newValue);
	}
	template <typename T = void> T ReplaceAvailabilityStart(int64_t newValue) {
		return ((T (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x183FF2C))(this, newValue);
	}
	template <typename T = void> T RemoveAvailabilityStart() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840030))(this);
	}
	template <typename T = uintptr_t> T get_categoryType() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x184003C))(this);
	}
	template <typename T = bool> T get_hasCategoryType() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x18400C4))(this);
	}
	template <typename T = void> T AddCategoryType(uintptr_t newType) {
		return ((T (*)(StoreSalesEntity*, uintptr_t))(Il2CppBase() + 0x18400D0))(this, newType);
	}
	template <typename T = void> T ReplaceCategoryType(uintptr_t newType) {
		return ((T (*)(StoreSalesEntity*, uintptr_t))(Il2CppBase() + 0x18401D4))(this, newType);
	}
	template <typename T = void> T RemoveCategoryType() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x18402D8))(this);
	}
	template <typename T = uintptr_t> T get_icon() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x18402E4))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x184036C))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(StoreSalesEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1840378))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(StoreSalesEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x18404D0))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840628))(this);
	}
	template <typename T = uintptr_t> T get_playerId() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840634))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x18406BC))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x18406C8))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x18407CC))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x18408D0))(this);
	}
	template <typename T = bool> T get_wasRead() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x18408DC))(this);
	}
	template <typename T = void> T set_wasRead(bool value) {
		return ((T (*)(StoreSalesEntity*, bool))(Il2CppBase() + 0x18408E8))(this, value);
	}
	template <typename T = uintptr_t> T get_storeSalesId() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840A00))(this);
	}
	template <typename T = bool> T get_hasStoreSalesId() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840A88))(this);
	}
	template <typename T = void> T AddStoreSalesId(int64_t newId) {
		return ((T (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x183F7F4))(this, newId);
	}
	template <typename T = void> T ReplaceStoreSalesId(int64_t newId) {
		return ((T (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x1840A94))(this, newId);
	}
	template <typename T = void> T RemoveStoreSalesId() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840B98))(this);
	}
	template <typename T = uintptr_t> T get_text() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840BA4))(this);
	}
	template <typename T = bool> T get_hasText() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840C2C))(this);
	}
	template <typename T = void> T AddText(Il2CppString* newValue) {
		return ((T (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x1840C38))(this, newValue);
	}
	template <typename T = void> T ReplaceText(Il2CppString* newValue) {
		return ((T (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x1840D4C))(this, newValue);
	}
	template <typename T = void> T RemoveText() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840E60))(this);
	}
	template <typename T = uintptr_t> T get_title() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840E6C))(this);
	}
	template <typename T = bool> T get_hasTitle() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840EF4))(this);
	}
	template <typename T = void> T AddTitle(Il2CppString* newValue) {
		return ((T (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x1840F00))(this, newValue);
	}
	template <typename T = void> T ReplaceTitle(Il2CppString* newValue) {
		return ((T (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x1841014))(this, newValue);
	}
	template <typename T = void> T RemoveTitle() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1841128))(this);
	}
	template <typename T = uintptr_t> T get_windowFrame() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x1841134))(this);
	}
	template <typename T = bool> T get_hasWindowFrame() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x18411BC))(this);
	}
	template <typename T = void> T AddWindowFrame(Il2CppString* newValue) {
		return ((T (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x18411C8))(this, newValue);
	}
	template <typename T = void> T ReplaceWindowFrame(Il2CppString* newValue) {
		return ((T (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x18412DC))(this, newValue);
	}
	template <typename T = void> T RemoveWindowFrame() {
		return ((T (*)(StoreSalesEntity*))(Il2CppBase() + 0x18413F0))(this);
	}

};

}
