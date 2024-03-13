#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class TrophyRoadDataContext : public DataContext1<TrophyRoadEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadDataContext"));
	}

	template <typename T = Il2CppString*> static T& Upgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Recipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UniqueLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& _maxDistrictLevel() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = QuestDataContext*> T& _questsData() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& _classRuneSlot() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = int32_t> T get_MaxDistrictLevel() {
		return ((T (*)(TrophyRoadDataContext*))(Il2CppBase() + 0x10156B8))(this);
	}
	template <typename T = TrophyRoadEntity*> T get_Item(int32_t level) {
		return ((T (*)(TrophyRoadDataContext*, int32_t))(Il2CppBase() + 0x10156C0))(this, level);
	}
	template <typename T = TrophyRoadEntity*> T get_Item_1(IDistrictLevelEntity* entity) {
		return ((T (*)(TrophyRoadDataContext*, IDistrictLevelEntity*))(Il2CppBase() + 0x1015820))(this, entity);
	}
	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(TrophyRoadDataContext*))(Il2CppBase() + 0x1015B80))(this);
	}
	template <typename T = TrophyRoadEntity*> T GetEntityWithRequiredLevel(int32_t level) {
		return ((T (*)(TrophyRoadDataContext*, int32_t))(Il2CppBase() + 0x1015744))(this, level);
	}
	template <typename T = TrophyRoadEntity*> T GetEntityWithRecipe(Il2CppString* recipe) {
		return ((T (*)(TrophyRoadDataContext*, Il2CppString*))(Il2CppBase() + 0x10164D4))(this, recipe);
	}
	template <typename T = Il2CppString*> T GetCurrentQuestName(int32_t level, bool canBuild) {
		return ((T (*)(TrophyRoadDataContext*, int32_t, bool))(Il2CppBase() + 0x10165B0))(this, level, canBuild);
	}
	template <typename T = HashSet1TrophyRoadEntity*>*> T GetEntitiesWithUniqueLookup(Il2CppString* uniqueLookup) {
		return ((T (*)(TrophyRoadDataContext*, Il2CppString*))(Il2CppBase() + 0x1016780))(this, uniqueLookup);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((T (*)(TrophyRoadDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x1016840))(this, blueprints);
	}
	template <typename T = int32_t> T GetTRLevelForClassRune(int32_t index) {
		return ((T (*)(TrophyRoadDataContext*, int32_t))(Il2CppBase() + 0x1019DB0))(this, index);
	}

};

