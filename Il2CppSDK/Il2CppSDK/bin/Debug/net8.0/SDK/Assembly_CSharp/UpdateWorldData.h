#pragma once

#include "../mscorlib/System/ValueType.h"


class UpdateWorldData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateWorldData"));
	}

	Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>*& Blueprints() {
		return *(Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x0);
	}

	static Il2CppArray<uint8_t>*& _compressionBuffer() {
		return *(Il2CppArray<uint8_t>**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static int32_t& UpdateWorldHeaderSize() {
		return *(int32_t*)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

};};
