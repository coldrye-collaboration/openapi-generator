/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIPet.h
 *
 * A pet for sale in the pet store
 */

#ifndef OAIPet_H
#define OAIPet_H

#include <QJsonObject>


#include "OAICategory.h"
#include "OAITag.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPet: public OAIObject {
public:
    OAIPet();
    OAIPet(QString json);
    ~OAIPet() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getId() const;
    void setId(const qint64 &id);

    OAICategory getCategory() const;
    void setCategory(const OAICategory &category);

    QString getName() const;
    void setName(const QString &name);

    QList<QString> getPhotoUrls() const;
    void setPhotoUrls(const QList<QString> &photo_urls);

    QList<OAITag> getTags() const;
    void setTags(const QList<OAITag> &tags);

    QString getStatus() const;
    void setStatus(const QString &status);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    qint64 id;
    bool m_id_isSet;
    bool m_id_isValid;
    OAICategory category;
    bool m_category_isSet;
    bool m_category_isValid;
    QString name;
    bool m_name_isSet;
    bool m_name_isValid;
    QList<QString> photo_urls;
    bool m_photo_urls_isSet;
    bool m_photo_urls_isValid;
    QList<OAITag> tags;
    bool m_tags_isSet;
    bool m_tags_isValid;
    QString status;
    bool m_status_isSet;
    bool m_status_isValid;
};

}

#endif // OAIPet_H
