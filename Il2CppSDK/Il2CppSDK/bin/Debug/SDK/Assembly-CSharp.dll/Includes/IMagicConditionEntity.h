#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicConditionEntity"));
	}


	template <typename T = MagicConditionComponent*> T get_magicCondition() {
		return ((T (*)(IMagicConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMagicCondition() {
		return ((T (*)(IMagicConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMagicCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((T (*)(IMagicConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename T = void> T ReplaceMagicCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((T (*)(IMagicConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename T = void> T RemoveMagicCondition() {
		return ((T (*)(IMagicConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

