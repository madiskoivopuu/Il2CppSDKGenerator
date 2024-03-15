#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSalesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSalesEntity"));
	}

	template <typename R = ReadComponent*> static R& readComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = AvailabilityEndComponent*> R get_availabilityEnd() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x183FAEC))(this);
	}
	template <typename R = bool> R get_hasAvailabilityEnd() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x183FB74))(this);
	}
	template <typename R = void> R AddAvailabilityEnd(int64_t newValue) {
		return ((R (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x183FB80))(this, newValue);
	}
	template <typename R = void> R ReplaceAvailabilityEnd(int64_t newValue) {
		return ((R (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x183FC84))(this, newValue);
	}
	template <typename R = void> R RemoveAvailabilityEnd() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x183FD88))(this);
	}
	template <typename R = AvailabilityStartComponent*> R get_availabilityStart() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x183FD94))(this);
	}
	template <typename R = bool> R get_hasAvailabilityStart() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x183FE1C))(this);
	}
	template <typename R = void> R AddAvailabilityStart(int64_t newValue) {
		return ((R (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x183FE28))(this, newValue);
	}
	template <typename R = void> R ReplaceAvailabilityStart(int64_t newValue) {
		return ((R (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x183FF2C))(this, newValue);
	}
	template <typename R = void> R RemoveAvailabilityStart() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840030))(this);
	}
	template <typename R = CategoryTypeComponent*> R get_categoryType() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x184003C))(this);
	}
	template <typename R = bool> R get_hasCategoryType() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x18400C4))(this);
	}
	template <typename R = void> R AddCategoryType(StoreCategory* newType) {
		return ((R (*)(StoreSalesEntity*, StoreCategory*))(Il2CppBase() + 0x18400D0))(this, newType);
	}
	template <typename R = void> R ReplaceCategoryType(StoreCategory* newType) {
		return ((R (*)(StoreSalesEntity*, StoreCategory*))(Il2CppBase() + 0x18401D4))(this, newType);
	}
	template <typename R = void> R RemoveCategoryType() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x18402D8))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x18402E4))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x184036C))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(StoreSalesEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1840378))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(StoreSalesEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x18404D0))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840628))(this);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840634))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x18406BC))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x18406C8))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x18407CC))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x18408D0))(this);
	}
	template <typename R = bool> R get_wasRead() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x18408DC))(this);
	}
	template <typename R = void> R set_wasRead(bool value) {
		return ((R (*)(StoreSalesEntity*, bool))(Il2CppBase() + 0x18408E8))(this, value);
	}
	template <typename R = StoreSalesIdComponent*> R get_storeSalesId() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840A00))(this);
	}
	template <typename R = bool> R get_hasStoreSalesId() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840A88))(this);
	}
	template <typename R = void> R AddStoreSalesId(int64_t newId) {
		return ((R (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x183F7F4))(this, newId);
	}
	template <typename R = void> R ReplaceStoreSalesId(int64_t newId) {
		return ((R (*)(StoreSalesEntity*, int64_t))(Il2CppBase() + 0x1840A94))(this, newId);
	}
	template <typename R = void> R RemoveStoreSalesId() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840B98))(this);
	}
	template <typename R = TextComponent*> R get_text() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840BA4))(this);
	}
	template <typename R = bool> R get_hasText() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840C2C))(this);
	}
	template <typename R = void> R AddText(Il2CppString* newValue) {
		return ((R (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x1840C38))(this, newValue);
	}
	template <typename R = void> R ReplaceText(Il2CppString* newValue) {
		return ((R (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x1840D4C))(this, newValue);
	}
	template <typename R = void> R RemoveText() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840E60))(this);
	}
	template <typename R = TitleComponent*> R get_title() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840E6C))(this);
	}
	template <typename R = bool> R get_hasTitle() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1840EF4))(this);
	}
	template <typename R = void> R AddTitle(Il2CppString* newValue) {
		return ((R (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x1840F00))(this, newValue);
	}
	template <typename R = void> R ReplaceTitle(Il2CppString* newValue) {
		return ((R (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x1841014))(this, newValue);
	}
	template <typename R = void> R RemoveTitle() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1841128))(this);
	}
	template <typename R = WindowFrameComponent*> R get_windowFrame() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x1841134))(this);
	}
	template <typename R = bool> R get_hasWindowFrame() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x18411BC))(this);
	}
	template <typename R = void> R AddWindowFrame(Il2CppString* newValue) {
		return ((R (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x18411C8))(this, newValue);
	}
	template <typename R = void> R ReplaceWindowFrame(Il2CppString* newValue) {
		return ((R (*)(StoreSalesEntity*, Il2CppString*))(Il2CppBase() + 0x18412DC))(this, newValue);
	}
	template <typename R = void> R RemoveWindowFrame() {
		return ((R (*)(StoreSalesEntity*))(Il2CppBase() + 0x18413F0))(this);
	}

};

