#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Localization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Localization"));
	}

	 static Il2CppDictionary<uintptr_t, Il2CppString*>*& _systemLanguageToName() {
		return *(Il2CppDictionary<uintptr_t, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppDictionary<Il2CppString*, uintptr_t>*& _nameToSystenLanguage() {
		return *(Il2CppDictionary<Il2CppString*, uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Il2CppDictionary<Il2CppString*, Il2CppString*>*& _localValues() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = ICommonLogger*> static R& _logger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = LocalizationStringParser*> static R& _localizationStringParser() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = Il2CppString*> static R& _rawData() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = uintptr_t> static R& OnChangeLanguage() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = Il2CppString*> static R& CurrentLanguage() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = int64_t> static R& Version() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& Languages() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = Il2CppString*> static R& LOCALIZATION_PATH() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppObject*>*> static R& _args() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename R = uintptr_t> static R ToSystemLanguage(Il2CppString* language) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1442ABC))(0, language);
	}
	template <typename R = Il2CppString*> static R ToLanguageName(uintptr_t language) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1442B44))(0, language);
	}
	template <typename R = bool> static R HasLanguage(Il2CppString* language) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1442BE0))(0, language);
	}
	template <typename R = bool> static R HasLanguage_1(uintptr_t language) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1442C6C))(0, language);
	}
	template <typename R = void> static R add_OnChangeLanguage(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1433CE0))(0, value);
	}
	template <typename R = void> static R remove_OnChangeLanguage(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1434314))(0, value);
	}
	template <typename R = Il2CppString*> static R get_CurrentLanguage() {
		return ((R (*)(void *))(Il2CppBase() + 0x1442CF8))(0);
	}
	template <typename R = void> static R set_CurrentLanguage(Il2CppString* value) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1442D5C))(0, value);
	}
	template <typename R = uintptr_t> static R get_CurrentSystemLanguage() {
		return ((R (*)(void *))(Il2CppBase() + 0x1442DC8))(0);
	}
	template <typename R = int64_t> static R get_Version() {
		return ((R (*)(void *))(Il2CppBase() + 0x1442E64))(0);
	}
	template <typename R = void> static R set_Version(int64_t value) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0x1442EC8))(0, value);
	}
	template <typename R = int32_t> static R CurrentLanguageId() {
		return ((R (*)(void *))(Il2CppBase() + 0x1442F30))(0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R get_Languages() {
		return ((R (*)(void *))(Il2CppBase() + 0x14430BC))(0);
	}
	template <typename R = void> static R set_Languages(Il2CppArray<Il2CppString*>* value) {
		return ((R (*)(void *, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1443120))(0, value);
	}
	template <typename R = void> static R Init(ICommonLogger* logger) {
		return ((R (*)(void *, ICommonLogger*))(Il2CppBase() + 0x144318C))(0, logger);
	}
	template <typename R = void> static R ApplyLocalization(Il2CppString* localization) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1443A04))(0, localization);
	}
	template <typename R = void> static R SetLanguage(Il2CppString* language) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1443C94))(0, language);
	}
	template <typename R = Il2CppString*> static R GetValue(Il2CppString* key) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x14446C8))(0, key);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R GetKeys(Il2CppString* keyPattern) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1444AF8))(0, keyPattern);
	}
	template <typename R = Il2CppString*> static R Substitute(Il2CppString* keysString, Il2CppArray<Il2CppObject*>* args) {
		return ((R (*)(void *, Il2CppString*, Il2CppArray<Il2CppObject*>*))(Il2CppBase() + 0x14288FC))(0, keysString, args);
	}
	template <typename R = void> static R Log(Il2CppString* message) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x14436E4))(0, message);
	}
	template <typename R = void> static R LogError(Il2CppString* message) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1444A50))(0, message);
	}

};

