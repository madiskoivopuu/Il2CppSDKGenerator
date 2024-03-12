#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Localization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Localization"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> static T& _systemLanguageToName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& _nameToSystenLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& _localValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _logger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _localizationStringParser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& _rawData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& OnChangeLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& CurrentLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = int64_t> static T& Version() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& Languages() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppString*> static T& LOCALIZATION_PATH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _args() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> static T ToSystemLanguage(Il2CppString* language) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1442ABC))(0, language);
	}
	template <typename T = Il2CppString*> static T ToLanguageName(uintptr_t language) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1442B44))(0, language);
	}
	template <typename T = bool> static T HasLanguage(Il2CppString* language) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1442BE0))(0, language);
	}
	template <typename T = bool> static T HasLanguage_1(uintptr_t language) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1442C6C))(0, language);
	}
	template <typename T = void> static T add_OnChangeLanguage(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1433CE0))(0, value);
	}
	template <typename T = void> static T remove_OnChangeLanguage(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1434314))(0, value);
	}
	template <typename T = Il2CppString*> static T get_CurrentLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1442CF8))(0);
	}
	template <typename T = void> static T set_CurrentLanguage(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1442D5C))(0, value);
	}
	template <typename T = uintptr_t> static T get_CurrentSystemLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1442DC8))(0);
	}
	template <typename T = int64_t> static T get_Version() {
		return ((T (*)(void *))(Il2CppBase() + 0x1442E64))(0);
	}
	template <typename T = void> static T set_Version(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x1442EC8))(0, value);
	}
	template <typename T = int32_t> static T CurrentLanguageId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1442F30))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_Languages() {
		return ((T (*)(void *))(Il2CppBase() + 0x14430BC))(0);
	}
	template <typename T = void> static T set_Languages(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1443120))(0, value);
	}
	template <typename T = void> static T Init(uintptr_t logger) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x144318C))(0, logger);
	}
	template <typename T = void> static T ApplyLocalization(Il2CppString* localization) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1443A04))(0, localization);
	}
	template <typename T = void> static T SetLanguage(Il2CppString* language) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1443C94))(0, language);
	}
	template <typename T = Il2CppString*> static T GetValue(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x14446C8))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetKeys(Il2CppString* keyPattern) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1444AF8))(0, keyPattern);
	}
	template <typename T = Il2CppString*> static T Substitute(Il2CppString* keysString, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14288FC))(0, keysString, args);
	}
	template <typename T = void> static T Log(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x14436E4))(0, message);
	}
	template <typename T = void> static T LogError(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1444A50))(0, message);
	}

};

}
