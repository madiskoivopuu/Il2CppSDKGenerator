#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestsSaveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestsSaveEntity"));
	}


	template <typename T = uintptr_t> T get_questsSave() {
		return ((T (*)(IQuestsSaveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasQuestsSave() {
		return ((T (*)(IQuestsSaveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddQuestsSave(int32_t newVersion, Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(IQuestsSaveEntity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newVersion, newData);
	}
	template <typename T = void> T ReplaceQuestsSave(int32_t newVersion, Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(IQuestsSaveEntity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newVersion, newData);
	}
	template <typename T = void> T RemoveQuestsSave() {
		return ((T (*)(IQuestsSaveEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
