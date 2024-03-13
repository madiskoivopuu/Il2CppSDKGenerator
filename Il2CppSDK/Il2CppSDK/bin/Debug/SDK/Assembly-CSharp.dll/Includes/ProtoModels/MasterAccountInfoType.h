#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MasterAccountInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MasterAccountInfoType"));
	}

	template <typename T = MessageParser1MasterAccountInfoType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BattleTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& battleTag_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CustomizationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_customization_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& customization_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& GenderFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& gender_() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = MessageParser1MasterAccountInfoType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12CBC48))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12CBCAC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CBDCC))(this);
	}
	template <typename T = MasterAccountInfoType*> T Clone() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CBFB8))(this);
	}
	template <typename T = Il2CppString*> T get_BattleTag() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC014))(this);
	}
	template <typename T = void> T set_BattleTag(Il2CppString* value) {
		return ((T (*)(MasterAccountInfoType*, Il2CppString*))(Il2CppBase() + 0x12CC01C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC09C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(MasterAccountInfoType*, Il2CppString*))(Il2CppBase() + 0x12CC0A4))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC124))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(MasterAccountInfoType*, int32_t))(Il2CppBase() + 0x12CC12C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC134))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(MasterAccountInfoType*, Il2CppString*))(Il2CppBase() + 0x12CC13C))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC1BC))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(MasterAccountInfoType*, int64_t))(Il2CppBase() + 0x12CC1C4))(this, value);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_Customization() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC1CC))(this);
	}
	template <typename T = int32_t> T get_Gender() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC1D4))(this);
	}
	template <typename T = void> T set_Gender(int32_t value) {
		return ((T (*)(MasterAccountInfoType*, int32_t))(Il2CppBase() + 0x12CC1DC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(MasterAccountInfoType*, Il2CppObject*))(Il2CppBase() + 0x12CC1E4))(this, other);
	}
	template <typename T = bool> T Equals_1(MasterAccountInfoType* other) {
		return ((T (*)(MasterAccountInfoType*, MasterAccountInfoType*))(Il2CppBase() + 0x12CC254))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC348))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC450))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MasterAccountInfoType*, uintptr_t))(Il2CppBase() + 0x12CC4B4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC684))(this);
	}
	template <typename T = void> T MergeFrom(MasterAccountInfoType* other) {
		return ((T (*)(MasterAccountInfoType*, MasterAccountInfoType*))(Il2CppBase() + 0x12CC8B8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MasterAccountInfoType*, uintptr_t))(Il2CppBase() + 0x12CC990))(this, input);
	}

};

}
