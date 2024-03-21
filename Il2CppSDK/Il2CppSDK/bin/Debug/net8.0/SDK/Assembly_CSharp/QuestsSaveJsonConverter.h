#pragma once

#include "../Newtonsoft_Json/Newtonsoft_Json/JsonConverter.h"


class QuestsSaveJsonConverter : public JsonConverter {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsSaveJsonConverter"));
	}

	static char& PART_SEPARATOR() {
		return *(char*)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static char& OBJECT_SEPARATOR() {
		return *(char*)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static char& PROPERTY_SEPARATOR() {
		return *(char*)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static char& PARAMS_SEPARATOR() {
		return *(char*)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

};};
