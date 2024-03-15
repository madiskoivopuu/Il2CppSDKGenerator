#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Dev2DevRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Dev2DevRequest"));
	}

	 static MessageParser1ProtoModels::Dev2DevRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::Dev2DevRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserDev2DevIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& userDev2DevID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& EventNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& eventName_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ActionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& action_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& LabelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& label_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& SubLabelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& subLabel_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& PlayerLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& playerLevel_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& ValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& value_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& PlatformFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& platform_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& Value2FieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& value2_() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	 static MessageParser1ProtoModels::Dev2DevRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::Dev2DevRequest*>* (*)(void *))(Il2CppBase() + 0xEBFA30))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xEBFA94))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFBB4))(this);
	}
	template <typename R = ProtoModels::Dev2DevRequest*> R Clone() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFD4C))(this);
	}
	template <typename R = Il2CppString*> R get_UserDev2DevID() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFDA8))(this);
	}
	template <typename R = void> R set_UserDev2DevID(Il2CppString* value) {
		return ((R (*)(Dev2DevRequest*, Il2CppString*))(Il2CppBase() + 0xEBFDB0))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFE30))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(Dev2DevRequest*, int64_t))(Il2CppBase() + 0xEBFE38))(this, value);
	}
	template <typename R = Il2CppString*> R get_EventName() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFE40))(this);
	}
	template <typename R = void> R set_EventName(Il2CppString* value) {
		return ((R (*)(Dev2DevRequest*, Il2CppString*))(Il2CppBase() + 0xEBFE48))(this, value);
	}
	template <typename R = Il2CppString*> R get_Action() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFEC8))(this);
	}
	template <typename R = void> R set_Action(Il2CppString* value) {
		return ((R (*)(Dev2DevRequest*, Il2CppString*))(Il2CppBase() + 0xEBFED0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Label() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFF50))(this);
	}
	template <typename R = void> R set_Label(Il2CppString* value) {
		return ((R (*)(Dev2DevRequest*, Il2CppString*))(Il2CppBase() + 0xEBFF58))(this, value);
	}
	template <typename R = Il2CppString*> R get_SubLabel() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFFD8))(this);
	}
	template <typename R = void> R set_SubLabel(Il2CppString* value) {
		return ((R (*)(Dev2DevRequest*, Il2CppString*))(Il2CppBase() + 0xEBFFE0))(this, value);
	}
	template <typename R = int32_t> R get_PlayerLevel() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0060))(this);
	}
	template <typename R = void> R set_PlayerLevel(int32_t value) {
		return ((R (*)(Dev2DevRequest*, int32_t))(Il2CppBase() + 0xEC0068))(this, value);
	}
	template <typename R = int64_t> R get_Value() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0070))(this);
	}
	template <typename R = void> R set_Value(int64_t value) {
		return ((R (*)(Dev2DevRequest*, int64_t))(Il2CppBase() + 0xEC0078))(this, value);
	}
	template <typename R = int32_t> R get_Platform() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0080))(this);
	}
	template <typename R = void> R set_Platform(int32_t value) {
		return ((R (*)(Dev2DevRequest*, int32_t))(Il2CppBase() + 0xEC0088))(this, value);
	}
	template <typename R = int64_t> R get_Value2() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0090))(this);
	}
	template <typename R = void> R set_Value2(int64_t value) {
		return ((R (*)(Dev2DevRequest*, int64_t))(Il2CppBase() + 0xEC0098))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Dev2DevRequest*, Il2CppObject*))(Il2CppBase() + 0xEC00A0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Dev2DevRequest* other) {
		return ((R (*)(Dev2DevRequest*, ProtoModels::Dev2DevRequest*))(Il2CppBase() + 0xEC0110))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0200))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0368))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Dev2DevRequest*, uintptr_t))(Il2CppBase() + 0xEC03CC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC05D8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Dev2DevRequest* other) {
		return ((R (*)(Dev2DevRequest*, ProtoModels::Dev2DevRequest*))(Il2CppBase() + 0xEC08A8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Dev2DevRequest*, uintptr_t))(Il2CppBase() + 0xEC0984))(this, input);
	}

};

}
