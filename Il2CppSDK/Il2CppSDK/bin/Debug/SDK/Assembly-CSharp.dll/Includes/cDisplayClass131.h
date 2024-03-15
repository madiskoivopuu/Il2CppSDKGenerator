#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass131
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass13_1"));
	}

	template <typename R = GooglePlayGamesBasicApiSavedGame::IConflictResolver*> R& resolver() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*> R& original() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& originalData() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*> R& unmerged() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& unmergedData() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = cDisplayClass130*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R ToOnGameThreadb__1() {
		return ((R (*)(cDisplayClass131*))(Il2CppBase() + 0x1144884))(this);
	}

};

